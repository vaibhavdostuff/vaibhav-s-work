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
