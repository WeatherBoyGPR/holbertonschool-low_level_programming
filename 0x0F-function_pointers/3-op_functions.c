#include "3-calc.h"

/**
 * op_add - Will add two integers
 * @a: first number in the operation
 * @b: second number in the operation
 *
 * Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Will perform subtraction with two integers
 * @a: first number in the operation
 * @b: second number in the operation
 *
 * Return: the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Will multiply two integers
 * @a: first number in the operation
 * @b: second number in the operation
 *
 * Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Will divide a by b
 * @a: first number in the operation
 * @b: second number in the operation
 *
 * Return: the result of the operation
 */
int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - Will mod two integers
 * @a: first number in the operation
 * @b: second number in the operation
 *
 * Return: the result of the operation
 */
int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}
