#include "main.h"

/**
 * print_int - will prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int resi = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		resi += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		resi += _putchar('+');
	if (n <= 0)
		resi++;
	print_number(n);
	return (resi);
}

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the structure of flags determining
 * if a flag is passed to _printf func
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int un_i = va_arg(l, unsigned int);
	char *str = convert(un_i, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digit numbers
 * @n: integer numbers to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
