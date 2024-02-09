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

//19
// C program to find quotient and
// remainder
#include <stdio.h>

int find_quotient(int a, int b)
{
	// Return Quotient
	return a / b;
}
int find_remainder(int a, int b)
{
	// Return Quotient
	return a % b;
}

// Driver code
int main()
{
	int A = 17, B = 5;

	int quotient = find_quotient(A, B);
	int remainder = find_remainder(A, B);
	printf("Quotient when A/B is: %d\n", quotient);
	printf("Remainder when A/B is: %d", remainder);
	return 0;
}

//20
// C program to print initials 
// of a name 
# include <stdio.h> 
# include <string.h> 
# include <ctype.h> 

// Function declaration 
void getInitials(char* name); 

// Driver code 
int main(void) 
{	 
	// Declare an character array for 
	// entering names assuming the 
	// name doesn't exceed 31 characters 
	char name[50] = "Geeks for Geeks"; 
	
	printf("Your initials are: "); 
	
	// getInitials function prints 
	// the initials of the given name 
	getInitials(name);	 
} 

void getInitials(char* name) 
{	 
	int i = 0; 
	
	if(strlen(name) > 0 && 
		isalpha(name[0])) 
	printf("%c ", toupper(name[0])); 

	
	while(name[i] != '\0') 
	{ 
	if(isspace(name[i]) != 0) 
	{ 
		while(isspace(name[i]) && 
			i <= strlen(name)) 
		{ 
		i++ ;			 
		} 
		printf("%c ", toupper(name[i])); 
	} 
	i++; 
	} 
printf("\n"); 
}

//21
// C Implementation for drawing circle 
#include <graphics.h> 

//driver code 
int main() 
{ 
	// gm is Graphics mode which is 
	// a computer display mode that 
	// generates image using pixels. 
	// DETECT is a macro defined in 
	// "graphics.h" header file 
	int gd = DETECT, gm; 

	// initgraph initializes the 
	// graphics system by loading a 
	// graphics driver from disk 
	initgraph(&gd, &gm, ""); 

	// circle function 
	circle(250, 200, 50); 

	getch(); 

	// closegraph function closes the 
	// graphics mode and deallocates 
	// all memory allocated by 
	// graphics system . 
	closegraph(); 

	return 0; 
} 

//22
// C program to display the 
// location of the file
#include <stdio.h>

// Driver code
int main()
{
// Prints location of C this C code.
printf("%s", __FILE__);
} 

//23
// C program that prints its source code.
#include<stdio.h>

// Driver code
int main(void)
{
	// We can append this code to any C program
	// such that it prints its source code.
	char c; 
	FILE *fp = fopen(__FILE__, "r");

	do
	{
		c = fgetc(fp);
		putchar(c);
	}
	while (c != EOF);

	fclose(fp);

	return 0;
}

//24
// C program to illustrate fopen()

#include <stdio.h>
#include <stdlib.h>

int main()
{

	// pointer demo to FILE
	FILE* demo;

	// Creates a file "demo_file"
	// with file access as write-plus mode
	demo = fopen("demo_file.txt", "w+");

	// adds content to the file
	fprintf(demo, "%s %s %s", "Welcome", "to",
			"GeeksforGeeks");

	// closes the file pointed by demo
	fclose(demo);

	return 0;
}

//25
// C program to illustrate fopen()

#include <stdio.h>

int main()
{

	// pointer demo to FILE
	FILE* demo;
	int display;

	// Creates a file "demo_file"
	// with file access as read mode
	demo = fopen("demo_file.txt", "r");

	// loop to extract every characters
	while (1) {
		// reading file
		display = fgetc(demo);

		// end of file indicator
		if (feof(demo))
			break;

		// displaying every characters
		printf("%c", display);
	}

	// closes the file pointed by demo
	fclose(demo);

	return 0;
}

