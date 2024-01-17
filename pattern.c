//1
// C program to print right half pyramid pattern of star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing rows 
	for (int i = 0; i < rows; i++) { 

		// second loop for printing character in each rows 
		for (int j = 0; j <= i; j++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

//2
// c program to print left half pyramid pattern of star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop is for printing the rows 
	for (int i = 0; i < rows; i++) { 

		// loop for printing leading whitespaces 
		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// loop for printing * character 
		for (int k = 0; k <= i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

//3
// C program to print the full pyramid pattern of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop to print all rows 
	for (int i = 0; i < rows; i++) { 

		// inner loop 1 to print white spaces 
		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// inner loop 2 to print star * character 
		for (int k = 0; k < 2 * i + 1; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

//4
// C program to print the inverted right half pyramid of 
// stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop to print all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop to print the * in each row 
		for (int j = 0; j < rows - i; j++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

//5
// C program to print the inverted left half pyramid pattern 
// of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing star * 
		for (int k = 0; k < rows - i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 

	return 0; 
}
