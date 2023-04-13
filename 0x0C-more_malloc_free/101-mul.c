#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/* function prototypes */

int is_digit(char *s);
size_t _strlen(char *s);
void errors(void);
void print_result(int *result, int len);

/**
* is_digit - checks if a string contains only digits
* @s: string to be evaluated
*
* Return: 1 if s contains only digits, 0 otherwise
*/

int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')

		return (0);
		s++;
	}

	return (1);
}

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/

size_t _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	len++;

	return (len);
}

/**
* errors - handles errors for main
*
*/

void errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
* print_result - prints the product of two numbers
* @result: an array containing the result of the multiplication
* @len: the length of the result array
*/

void print_result(int *result, int len)
{
	int i, a = 0;

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
		a = 1;
		if (a)
		putchar(result[i] + '0');
	}
	if (!a)
	putchar('0');
	putchar('\n');
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
	return (1);
	for (i = 0; i <= len1 + len2; i++)
	result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	print_result(result, len);
	free(result);
	return (0);
}
