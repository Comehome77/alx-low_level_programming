#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds numbers
 * @a: number one
 * @b: number two
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts numbers
 * @a: number one
 * @b: number two
 * Return: difference of numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: number one
 * @b: number two
 * Return: product of numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides numbers
 * @a: number one
 * @b: number two
 * Return: quotient of numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos of numbers
 * @a: number one
 * @b: number two
 * Return: modulus of numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
