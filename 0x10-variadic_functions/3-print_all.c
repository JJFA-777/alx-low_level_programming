#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything, followed by a new line.
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, scan;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		scan = 1;
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
			default:
				scan = 0;
				break;
		}
		if (scan && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
