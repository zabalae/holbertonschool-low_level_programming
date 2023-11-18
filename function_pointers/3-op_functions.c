#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: first number
 * @b: second number
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply to numbers
 * @a: first number
 * @b: second number
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module
 * @a: first number
 * @b: second number
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
