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
	int i = 0, seen_string = 0;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (seen_string == 0 && format[i] == 'c')
		{
			i++;
			continue;
		}
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
				seen_string = 1;
				break;
			default:
				break;
		}
		if (format[i] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
