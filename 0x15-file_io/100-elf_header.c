#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * check_argc - Checks if the number of arguments is correct.
 * @argc: The number of arguments.
 *
 * Return: Nothing.
 * Exits with code 97 if the number of arguments is incorrect.
**/

void check_argc(int argc)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}
}

/**
 * open_file - Opens the ELF file.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor of the opened file.
 * Exits with code 98 if the file cannot be read.
**/

int open_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * read_elf_header - Reads the ELF header from an ELF file.
 * @fd: The file descriptor of the ELF file.
 *
 * Return: The ELF header.
 * Exits with code 98 if the file cannot be read.
**/

Elf64_Ehdr read_elf_header(int fd)
{
	Elf64_Ehdr header;
	ssize_t read_count = read(fd, &header, sizeof(header));

	if (read_count != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		close(fd);
		exit(98);
	}
	return (header);
}

/**
 * check_elf_magic - Checks if the file is an
 * ELF file by looking at the magic numbers.
 * @header: The ELF header.
 *
 * Return: Nothing.
 * Exits with code 98 if the file is not an ELF file.
**/

void check_elf_magic(Elf64_Ehdr header)
{
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] !=
	ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_elf_header - Prints the information
 * contained in the ELF header.
 * @header: The ELF header.
 *
 * Return: Nothing.
**/

void print_elf_header(Elf64_Ehdr header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("Class:                             ");
	if (header.e_ident[EI_CLASS] == ELFCLASS32) printf("ELF32\n");
	else if (header.e_ident[EI_CLASS] == ELFCLASS64) printf("ELF64\n");
	else printf("UNKNOWN\n");

	printf("Data:                              ");
	if (header.e_ident[EI_DATA] == ELFDATA2LSB)
	printf("2's complement, little endian\n");
	else if (header.e_ident[EI_DATA] == ELFDATA2MSB)
	printf("2's complement, big endian\n");
	else printf("UNKNOWN\n");

	printf("Version:                           ");
	if (header.e_ident[EI_VERSION] == EV_CURRENT)
	printf("%d (current)\n", EV_CURRENT);
	else printf("%d\n", header.e_ident[EI_VERSION]);

	printf("OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("Sun Solaris\n"); break;
		case ELFOSABI_AIX: printf("IBM AIX\n"); break;
		case ELFOSABI_IRIX: printf("SGI Irix\n"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
		case ELFOSABI_MODESTO: printf("Novell Modesto\n"); break;
		case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
		default: printf("<unknown: %x>\n",
		header.e_ident[EI_OSABI]); break;
	}

	printf("ABI Version:                       %d\n",
	header.e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (No file type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>: %x\n", header.e_type); break;
	}
	printf("Entry point address:               0x%lx\n", header.e_entry);
}

/**
 * close_file - Closes a file.
 * @fd: The file descriptor of the file to close.
 *
 * Return: Nothing.
 * Exits with code 100 if the file descriptor cannot be closed.
**/

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * Various exit codes on failure.
**/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	check_argc(argc);

	fd = open_file(argv[1]);

	header = read_elf_header(fd);

	check_elf_magic(header);

	print_elf_header(header);

	close_file(fd);

	return (0);
}
