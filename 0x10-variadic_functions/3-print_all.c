#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format string indicating the types of arguments that follow
**/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int print_separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				print_separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				print_separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print_separator = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				print_separator = 1;
				break;
			default:
				print_separator = 0;
		}
		if (print_separator && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

