//1
// C program to demonstrate
// an invalid memory access error
#include <stdio.h>
int a[5];
int main()
{
	int s = a[-11];
	printf("%d", s);
	return 0;
}

//2
// C program to demonstrate
// an error occurred by dividing 0
#include <stdio.h>

int main()
{
	int a = 5;
	printf("%d", a / 0);
	return 0;
}

//3
// C program to demonstrate
// an error of segmentation faults
#include <stdio.h>

int main()
{
	int GFG[5];
	GFG[10] = 10;
	return 0;
}

//4
// C program to demonstrate
// an error of large memory allocation
#include <stdio.h>

int main()
{
	int GFG[10000000000];
	printf("%d", GFG);
	return 0;
}

//5
// C program to demonstrate
// a common error
#include <stdio.h>

int main()
{
	long int GFG;
	scanf("%d", &GFG);
	return 0;
}

//6
// C program to demonstrate
// a syntax error due to 
// missing semi colon
#include <stdio.h>

// Driver code
int main() 
{
// missing semicolon
printf("Geeks for geeks!") 
return 0;
}

//7
// C program to demonstrate
// a syntax error due to
// missing parenthesis
#include <stdio.h>

// Driver code
int main() 

printf("Geeks for Geeks");
return 0;
}

//8
// C program to demonstrate
// a runtime error
#include <stdio.h>

// Driver code 
int main() 
{
int array[5];
printf("%d", array[10]);
return 0;
}

//9
// C program to demonstrate
// a logical error
#include <stdio.h>

// Driver code
int main() 
{
int i; 
for(i = 0; i <= 5; i++); 
{
	printf("Geeks for Geeks");
}
	return 0;
}

//10
// C program to demonstrate
// a linker error
#include <stdio.h>

// Driver code
int Main() 
{
printf("Geeks for Geeks");
return 0;
}

//11
// C program to demonstrate
// a semantic error
#include <stdio.h>

// Driver code
int main() 
{
int x = 10;
	b = 20, c; 
x + y = c;
printf("%d", c);
	return 0;
}

//12
// C program to demonstrate 
// unreachable code error 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	printf("geeks for geeks"); 
	return 0; 
	printf("gfg"); 
} 

//13
// C program to implement 
// the above approach 
#include <stdio.h> 

// Driver code 
int main() 
{ 
int a = 2; 
for (;;) 
{ 
	if (a == 2) 
	{ 
	break; 
		
	// It will never execute, so 
	// same error will be there. 
	printf("GeeksforGeeks"); 
	} 
} 
return 0; 
}

//14
// C program to implement 
// the above approach 
#include <stdio.h> 

// Driver code 
int main() 
{ 
for (int i = 0; i < 5; i++) 
{ 
	continue; 
	printf("GeeksforGeeks"); 
} 
return 0; 
} 

//15
// C program to show the 
// unreachable error 
#include <math.h> 
#include <stdio.h> 

// Driver code 
int main() 
{ 
// The value of sqrt(2) is 1.414 
double X = sqrt(2); 
	
// 1.414>5 condition false so it 
// will not be entered inside the 
// if statement 
if (X > 5) 
{ 
	/* unreachable code */
	X++; 
} 
return 0; 
}

//16
// C program to show the 
// unreachable error 
#include <stdio.h> 

// Driver code 
int main() 
{ 
// The value of N is 3 
int N = 2 + 1; 
	
// 3==4 false so it will not be 
// entered inside the if statement 
if (N == 4) 
{ 
	/* unreachable code */
	printf("equal"); 
} 
return 0; 
}

//17
// C program to find quotient
// and remainder of two numbers
#include <stdio.h>

// Driver code
int main()
{
	int A, B, quotient = 0, remainder = 0;

	// Ask user to enter the two numbers
	printf("Enter two numbers A and B : \n");

	// Read two numbers from the user || A = 17, B = 5
	scanf("%d%d", &A, &B);

	// Calculate the quotient of A and B using '/' operator
	quotient = A / B;

	// Calculate the remainder of A and B using '%' operator
	remainder = A % B;

	// Print the result
	printf("Quotient when A/B is: %d\n", quotient);
	printf("Remainder when A/B is: %d", remainder);

	return 0;
}

//18
// C program to find quotient and
// remainder
#include <stdio.h>

// Driver code
int main()
{
	int A = 17, B = 5;

	int quotient = 0;

	// Initializing the loop
	while (quotient * B <= A)
		quotient++;

	// Decrementing 1 because we came
	// one step forward
	quotient--;

	int remainder = A - (B * quotient);

	printf("Quotient when A/B is: %d\n", quotient);
	printf("Remainder when A/B is: %d", remainder);
	return 0;
}
