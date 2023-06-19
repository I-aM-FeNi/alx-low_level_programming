#include <stdio.h>

/**
* Adds two integers and returns the result.
*
* @param a The first integer.
* @param b The second integer.
* @return The sum of the two integers.
*/
int add(int a, int b)
{
return (a + b);
}

/**
* Subtracts the second integer from the first integer and returns the result.
*
* @param a The first integer.
* @param b The second integer.
* @return The difference between the first and second integers.
*/
int sub(int a, int b)
{
return (a - b);
}

/**
* Multiplies two integers and returns the result.
*
* @param a The first integer.
* @param b The second integer.
* @return The product of the two integers.
*/
int mul(int a, int b)
{
return (a * b);
}

/**
* Performs integer division of the first integer by the second integer and returns the result.
*
* @param a The dividend.
* @param b The divisor.
* @return The quotient of the division.
*/
int division(int a, int b)
{
return (a / b);
}

/**
* Performs modulus operation of the first integer by the second integer and returns the result.
*
* @param a The dividend.
* @param b The divisor.
* @return The remainder of the division.
*/
int mod(int a, int b)
{
return (a % b);
}

/**
* Entry point of the program.
*
* @return 0 indicating successful execution of the program.
*/

int main(void)
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

printf("Addition: %d\n", add(num1, num2));
printf("Subtraction: %d\n", sub(num1, num2));
printf("Multiplication: %d\n", mul(num1, num2));
printf("Division: %d\n", division(num1, num2));
printf("Modulus: %d\n", mod(num1, num2));

return (0);
}
