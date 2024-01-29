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

//11
// C program to Demonstrate the
// Multiplication table of a number
#include <stdio.h>
void print_table(int range, int num)
{
	// Declaring a variable mul to store the product.
	int mul;

	// For loop to calculate the Multiplication table.
	for (int i = 1; i <= range; i++) {
		// To store the product.
		mul = num * i;

		// Printing the Multiplication Table.
		printf("%d * %d = %d", num, i, mul);

		// Proceeding to the next line.
		printf("\n");
	}
}
// Driver code
int main()
{

	// The range of the
	// Multiplication table
	int range = 10;

	// The number to calculate the
	// Multiplication table
	int num = 5;

	// Calling the Function.
	print_table(range, num);

	return 0;
}

//12
// C Program to print the Fibonacci series using recursion 
#include <stdio.h> 

// first two values 
int prev1 = 1; 
int prev2 = 0; 

// recursive function to print the fibonacci series 
void fib(int n) 
{ 
	if (n < 3) { 
		return; 
	} 
	int fn = prev1 + prev2; 
	prev2 = prev1; 
	prev1 = fn; 
	printf("%d ", fn); 
	return fib(n - 1); 
} 

// function that handles the first two terms and calls the 
// recursive function 
void printFib(int n) 
{ 
	// when the number of terms is less than 1 
	if (n < 1) { 
		printf("Invalid number of terms\n"); 
	} 
	// when the number of terms is 1 
	else if (n == 1) { 
		printf("%d ", 0); 
	} 
	// when the number of terms is 2 
	else if (n == 2) { 
		printf("%d %d", 0, 1); 
	} 
	// number of terms greater than 2 
	else { 
		printf("%d %d ", 0, 1); 
		fib(n); 
	} 
	return; 
} 

// driver code 
int main() 
{ 
	int n = 9; 
	printFib(n); 
	return 0; 
}

//13
// C program to find LCM of 
// two numbers 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	int x = 15, y = 25, max; 
	max = (x > y) ? x : y; 

	// While loop to check if max variable 
	// is divisible by x and y 
	while (1) { 
		if (max % x == 0 && max % y == 0) { 
			printf("The LCM of %d and %d is %d.", x, y, 
				max); 
			break; 
		} 

		++max; 
	} 

	return 0; 
}

//14
// C program to check given number is
// Armstrong number or not using Sum 
// of Digits
#include <stdio.h>

// Driver code
int main()
{
	int n = 153;
	int temp = n;
	int p = 0;

	// Calculating the sum of individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (rem * rem * rem);
		n = n / 10;
	}

	// Condition to check whether the
	// value of P equals to user input
	// or not.
	if (temp == p) {
		printf("Yes. It is Armstrong No.");
	}
	else {
		printf("No. It is not an Armstrong No.");
	}
	return 0;
}

//15
// C Program to Display Armstrong 
// numbers between 1 to 1000
#include <math.h>
#include <stdio.h>

int main()
{
	int i, sum, num, count = 0;
	printf(
		"All Armstrong number between 1 and 1000 are:\n");

	// This loop will run for 1 to 1000
	for (i = 1; i <= 1000; i++) {
		num = i;
		// Count number of digits.
		while (num != 0) {
			num /= 10;
			count++;
		}
		num = i;
		sum = pow(num % 10, count)
			+ pow((num % 100 - num % 10) / 10, count)
			+ pow((num % 1000 - num % 100) / 100, count);
		// Check for Armstrong Number
		if (sum == i) {
			printf("%d ", i);
		}
		count = 0;
	}
}

//16
// C program to demonstrate whether 
// a number is Neon number or not 
#include <stdio.h> 

int Check_Neon_Number(int num) { 

	// Calculating the square of the number 
	int square = num * num; 

	// Copying the square in a variable 
	// to extract the digit 
	int n = square; 

	// Declaring a variable to store the digits 
	int digit; 

	// Initializing a variable to 
	// calculate the sum of digits 
	int sum = 0; 

	// To calculate the sum of digits 
	while (n != 0) { 

		// Extracting the digit 
		digit = n % 10; 
		sum = sum + digit; 
		n = n / 10; 
	} 

	// Checking the condition of a Neon Number 
	if (sum == num) 
		return 1; // If condition is true. 
	else
		return 0; // If condition is false. 
} 

// Driver Code 
int main() 
{ 
	int num = 9; 

	// Calling the function 
	int ans = Check_Neon_Number(num); 
	if (ans == 1) 

		// The number is Neon 
		printf("true"); 
	else

		// The number is not Neon 
		printf("false"); 
	return 0; 
}

//18
// C implementation of Naive 
// method to print all divisors 
#include <stdio.h> 

// Function to print the divisors 
void printDivisors(int n) 
{ 
	for (int i = 1; i <= n; i++) 
		if (n % i == 0) 
			printf("%d ", i); 
} 

// Driver code 
int main() 
{ 
	printf("The divisors of 100 are: "); 
	printDivisors(100); 

	return 0; 
}

//19
// C program to find GCD of two numbers 
#include <math.h> 
#include <stdio.h> 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Find Minimum of a and b 
	int result = ((a < b) ? a : b); 
	while (result > 0) { 
		// Check if both a and b are divisible by result 
		if (a % result == 0 && b % result == 0) { 
			break; 
		} 
		result--; 
	} 
	// return gcd of a nd b 
	return result; 
} 

// Driver program to test above function 
int main() 
{ 
	int a = 98, b = 56; 
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b)); 
	return 0; 
} 
// This code is contributed by Suruchi Kumari
