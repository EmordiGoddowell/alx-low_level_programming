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
		if (print_separator)
			printf(", ");
	
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
			print_separator = 1;
		else
			print_separator = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
