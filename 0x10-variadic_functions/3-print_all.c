#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int y = 0;
	char *s, *se = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[y])
		{
			switch (format[y])
			{
				case 'c':
					printf("%s%c", se, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", se, s);
					break;
				default:
					y++;
					continue;
			}
			se = ", ";
			y++;
		}
	}

	printf("\n");
	va_end(list);
}
