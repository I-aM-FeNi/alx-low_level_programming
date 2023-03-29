#include <stdio.h>
/**
* main - Entry point for program to demonstrate pointers and array indexing.
*
* Initializes array `a` and sets `a[2]` to 1024. Sets `n` indirectly through
* a pointer `p`, then prints `a[2]` (now 98).
* return value of main indicates the success or failure of the program. In
* this case, the program always returns 0 on success, indicating that it
* executed without error.
*
* Returns 0 on success.
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
