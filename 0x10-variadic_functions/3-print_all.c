#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: all inout firmat
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	int i = 0;

	va_start(args, format);
	str = va_arg(args, char *);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
						printf("%s%f", separator, (float)va_arg(args, double));
						break;
				case 's':
						if (!str)
						{
							str = "(nil)";
						}
						else
						{
							printf("%s%s", separator, str);
						}
				default:
						i++;
						continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
