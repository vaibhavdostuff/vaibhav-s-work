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

//6
// C program to print the inverted full pyramid pattern of 
// stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first loop for printing all rows 
	for (int i = 0; i < rows; i++) { 

		// first inner loop for printing leading white 
		// spaces 
		for (int j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing stars * 
		for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

//7
// C Program to print the rhombus pattern using * star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// first outer loop to iterate through each row 
	for (int i = 0; i < rows; i++) { 

		// first inner loop to print white spaces 
		for (int j = 0; j < rows - i - 1; j++) { 
			printf(" "); 
		} 

		// second inner loop to print * star in each row 
		for (int k = 0; k < rows; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}


//8
// C Program to print diamond pattern using star * 
#include <stdio.h> 
int main() 
{ 
	int n = 5; 

	// first outer loop to iterate through each row 
	for (int i = 0; i < 2 * n - 1; i++) { 

		// assigning values to the comparator according to 
		// the row number 
		int comp; 
		if (i < n) { 
			comp = 2 * (n - i) - 1; 
		} 
		else { 
			comp = 2 * (i - n + 1) + 1; 
		} 

		// first inner loop to print leading whitespaces 
		for (int j = 0; j < comp; j++) { 
			printf(" "); 
		} 

		// second inner loop to print stars * 
		for (int k = 0; k < 2 * n - comp; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

//9
// C Program to print hourglass pattern using star * 
#include <stdio.h> 
int main() 
{ 
	int rows = 5; 

	// first outer loop to iterate each row 
	for (int i = 0; i < 2 * rows - 1; i++) { 

		// assigning comparator 
		int comp; 
		if (i < rows) { 
			comp = 2 * i + 1; 
		} 
		else { 
			comp = 2 * (2 * rows - i) - 3; 
		} 

		// first inner loop to print leading spaces 
		for (int j = 0; j < comp; j++) { 
			printf(" "); 
		} 

		// second inner loop to print star * 
		for (int k = 0; k < 2 * rows - comp; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

//10
// C Program to print hollow square pattern using * star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// outer loop to iterator through each row 
	for (int i = 0; i < rows; i++) { 

		// inner loop to print * star in each row 
		for (int j = 0; j < rows; j++) { 
			// statement to check boundry condition 
			if (i > 0 && i < rows - 1 && j > 0 
				&& j < rows - 1) { 
				printf(" "); 
			} 
			else { 
				printf("* "); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}
