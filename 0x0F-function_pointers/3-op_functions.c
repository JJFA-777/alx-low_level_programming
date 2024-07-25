#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b.
 * @a: num1.
 * @b: num2.
 *
 * Return: sum of the 2.
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - returns the difference btw a and b.
 * @a: num1.
 * @b: num2.
 *
 * Return: difference of the 2 numbers.
 */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);
}

/**
 * op_mul - returns the product of a and b.
 * @a: num1.
 * @b: num2.
 *
 * Return: product of the 2.
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: num1.
 * @b: num2.
 *
 * Return: product of the 2 variables.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: num1.
 * @b: num2.
 *
 * Return: modulus of the 2.
 */

int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
