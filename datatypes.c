//1
#include <stdio.h>

int main()
{
	// Integer value with positive data.
	int a = 9;

	// integer value with negative data.
	int b = -9;

	// U or u is Used for Unsigned int in C.
	int c = 89U;

	// L or l is used for long int in C.
	long int d = 99998L;

	printf("Integer value with positive data: %d\n", a);
	printf("Integer value with negative data: %d\n", b);
	printf("Integer value with an unsigned int data: %u\n",
		c);
	printf("Integer value with an long int data: %ld", d);

	return 0;
}

//2
// C program to print Integer data types.
#include <stdio.h>

int main()
{
	char a = 'a';
	char c;

	printf("Value of a: %c\n", a);

	a++;
	printf("Value of a after increment is: %c\n", a);

	// c is assigned ASCII values
	// which corresponds to the
	// character 'c'
	// a-->97 b-->98 c-->99
	// here c will be printed
	c = 99;

	printf("Value of c: %c", c);

	return 0;
}

//3
// C Program to demonstrate use
// of Floating types
#include <stdio.h>

int main()
{
	float a = 9.0f;
	float b = 2.5f;

	// 2x10^-4
	float c = 2E-4f;
	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f", c);

	return 0;
}

//4
// C Program to demonstrate 
// use of double data type
#include <stdio.h>

int main()
{
	double a = 123123123.00;
	double b = 12.293123;
	double c = 2312312312.123123;

	printf("%lf\n", a);

	printf("%lf\n", b);

	printf("%lf", c);

	return 0;
}
