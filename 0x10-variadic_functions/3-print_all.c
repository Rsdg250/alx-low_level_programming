#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - A function that prints a char.
 * @arg: A list of arguments pointing to the character to be printed
 */

void print_char(va_list arg)
{
	char letters;

	letters = va_arg(arg, int);
	printf("%c", letters);
}

/**
 * print_int - A function that prints an integer
 * @arg: A list of arguments pointing to the integer to be printed
 */

void print_int(va_list arg)
{
	int numbers;

	numbers = va_arg(arg, int);
	printf("%d", numbers);
}

/**
 * print_float - A function that prints a float.
 * @arg: A list of arguments pointing to the float to be printed
 */

void print_float(va_list arg)
{
	float numbers;

	numbers = va_arg(arg, double);
	printf("%f", numbers);
}

/**
 * print_string - A function that prints a string
 * @arg: A list of arguments pointing to the string to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - A function that prints anything, followed by a new line
 * @format: A string of characters representing the argument's type
 * @...: The ellipsis of the function
 * Return: Any argument not char, int, float or char* type is ignored
 * But if a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
