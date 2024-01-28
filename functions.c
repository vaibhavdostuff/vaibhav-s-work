//1
// C program to demonstrate whether 
// a number is prime or not using 
// for loop 
#include <stdio.h> 

// Defining the function 
int primenumber(int number) 
{ 
	int i; 
	
	// Condition for checking the 
	// given number is prime or 
	// not 
	for (i = 2; i <= number / 2; i++) 
	{ 
		if (number % i != 0) 
			continue; 
		else
			return 1; 
	} 
	return 0; 
} 

// Driver code 
int main() 
{ 
	int num = 7, res = 0; 
	
	// Calling the function 
	res = primenumber(num); 
	if (res == 0) 
		printf("%d is a prime number", num); 
	else
		printf("%d is not a prime number", num); 
}

//2
// C program to demonstrate whether 
// a number is prime or not using 
// for loop 
#include <stdio.h> 

// Defining the function 
int primenumber(int number) 
{ 
	int i; 
	
	// Condition for checking 
	// the given number is prime 
	// number or not 
	for (i = 2; i <= number - 1; i++) 
	{ 
		if (number % i == 0) 
			return 0; 
	} 
	return 1; 
} 

// Driver code 
int main() 
{ 
	int num = 4, res; 
	
	// Calling the function 
	res = primenumber(num); 

	if (res == 1) 
		printf("%d is a prime number", num); 
	else
		printf("%d is not a prime number", num); 

	return 0; 
}

//3
// C program to demonstrate whether 
// a number is prime or not using 
// while loop 
#include <stdio.h> 

// Defining the function 
int primenumber(int number) 
{ 

	// Condition for checking the 
	// given number is prime or 
	// not 
	int i = 2; 
	while (i <= number / 2) 
	{ 
		if (number % i == 0) 
			return 0; 
		else
			i++; 
	} 
	return 1; 
} 

// Driver code 
int main() 
{ 
	int num = 7, prime; 
	
	// Calling the function 
	prime = primenumber(num); 
	
// Printing the result 
	if (prime == 1) 
		printf("%d is a prime number", num); 
	else
		printf("%d is not a prime number", num); 
	return 0; 
}

//4
// C Program to demonstrate Prime Numbers
// Between Two Intervals Using for 
// loop in a function
#include <stdio.h>

// User-defined function to check 
// prime number
int checkPrimeNumber(int number)
{
	int i, f = 1;

	// Condition for finding the
	// prime numbers between the
	// given intervals
	for (i = 2; i <= number / 2; ++i) 
	{
		if (number % i == 0) 
		{
			f = 0;
			break;
		}
	}

	return f;
}

// Driver code
int main()
{
	int num1 = 2, num2 = 10, j, f;

	printf("Prime numbers between %d and %d are: ", 
			num1, num2);
	for (j = num1; j < num2; ++j) 
	{
		// if flag is equal to 1 then
		// it is a prime number
		// calling the function
		f = checkPrimeNumber(j);

		if (f == 1) 
		{		 
			// Printing the result
			printf("%d ", j);
		}
	}

	return 0;
}

//5
// C program to find roots of 
// a quadratic equation 
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 

// Prints roots of quadratic 
// equation ax*2 + bx + x 
void findRoots(int a, int b, int c) 
{ 
	// If a is 0, then equation is 
	// not quadratic, but linear 
	if (a == 0) { 
		printf("Invalid"); 
		return; 
	} 

	int d = b * b - 4 * a * c; 
	double sqrt_val = sqrt(abs(d)); 

	if (d > 0) { 
		printf("Roots are real and different\n"); 
		printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a), 
			(double)(-b - sqrt_val) / (2 * a)); 
	} 
	else if (d == 0) { 
		printf("Roots are real and same\n"); 
		printf("%f", -(double)b / (2 * a)); 
	} 
	else // d < 0 
	{ 
		printf("Roots are complex\n"); 
		printf("%f + i%f\n%f - i%f", -(double)b / (2 * a), 
			sqrt_val / (2 * a), -(double)b / (2 * a), 
			sqrt_val / (2 * a)); 
	} 
} 

// Driver code 
int main() 
{ 
	int a = 1, b = -7, c = 12; 

	// Function call 
	findRoots(a, b, c); 
	return 0; 
}

//6
// C program to check whether a
// number can be expressed as sum
// of two prime numbers
#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
	int i, isPrime = 1;

	// 0 and 1 are not prime numbers
	if (n == 0 || n == 1) {
		isPrime = 0;
	}
	else {
		for (i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}

	return isPrime;
}

// Driver code
int main()
{
	int n = 7, i, flag = 0;

	for (i = 2; i <= n / 2; ++i) {
		// condition for i to be a
		// prime number
		if (isPrime(i) == 1) {
			// condition for n-i to
			// be a prime number
			if (isPrime(n - i) == 1) {
				printf("Yes\n");
				return 0;
			}
		}
	}

	printf("No\n");
	return 0;
}

//7
// C program to find the sum of n 
// natural numbers using recursion
#include <stdio.h>

// Returns the sum of first n
// natural numbers
int recSum(int n)
{
// Base condition
	if (n <= 1)
		return n;

// Recursive call
	return n + recSum(n - 1);
}

// Driver code
int main()
{
	int n = 10;
	printf("Sum = %d ", recSum(n));
	return 0;
}

//8
// C program to implement the above approach
#include <stdio.h>

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	int result = 1, i;

	// loop from 2 to n to get the factorial
	for (i = 2; i <= n; i++) {
		result *= i;
	}

	return result;
}

// Driver code
int main()
{
	int num = 5;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}

//9
// C program to find factorial of given number
#include <stdio.h>

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	if (n == 1) {
	return 1;
	}

	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 5;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}

//10
// C Program to make a Simple Calculator
// Using switch case
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
	char ch;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &ch);

		// to exit
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf", &a, &b);

		// Using switch case we will differentiate
		// operations based on different operator
		switch (ch) {

		// For Addition
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		// For Subtraction
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		// For Multiplication
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		// For Division
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		// If operator doesn't match any case constant
		default:
			printf(
				"Error! please write a valid operator\n");
		}

		printf("\n");
	}
}

