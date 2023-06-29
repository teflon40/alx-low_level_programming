#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list arg_l;

	va_start(arg_l, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_l, int));
				break;
			case 'i':
				printf("%d",  (int) va_arg(arg_l, unsigned int));
				break;
			case 's':
				s = va_arg(arg_l, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'f':
				printf("%f", (float) va_arg(arg_l, double));
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
		{
			putchar(',');
			putchar(' ');
			continue;
		}
		putchar('\n');
	}
}
