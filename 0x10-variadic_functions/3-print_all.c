#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int c = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[c])
		{
			switch (format[c])
			{
				case 'e':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'c':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					c++;
					continue;
			}
			sep = ", ";
			c++;
		}
	}

	printf("\n");
	va_end(list);
}
