//1
// C program to illustrate If statement 
#include <stdio.h> 

int main() 
{ 
	int i = 10; 

	if (i > 15) { 
		printf("10 is greater than 15"); 
	} 

	printf("I am Not in if"); 
}

//2
// C program to illustrate If statement 
#include <stdio.h> 

int main() 
{ 
	int i = 20; 

	if (i < 15) { 

		printf("i is smaller than 15"); 
	} 
	else { 

		printf("i is greater than 15"); 
	} 
	return 0; 
}

//3
// C program to illustrate nested-if statement 
#include <stdio.h> 

int main() 
{ 
	int i = 10; 

	if (i == 10) { 
		// First if statement 
		if (i < 15) 
			printf("i is smaller than 15\n"); 

		// Nested - if statement 
		// Will only be executed if statement above 
		// is true 
		if (i < 12) 
			printf("i is smaller than 12 too\n"); 
		else
			printf("i is greater than 15"); 
	} 

	return 0; 
}

//4
// C program to illustrate nested-if statement 
#include <stdio.h> 

int main() 
{ 
	int i = 20; 

	if (i == 10) 
		printf("i is 10"); 
	else if (i == 15) 
		printf("i is 15"); 
	else if (i == 20) 
		printf("i is 20"); 
	else
		printf("i is not present"); 
}

//5
// C Program to illustrate the use of switch statement 
#include <stdio.h> 

int main() 
{ 
	// variable to be used in switch statement 
	int var = 2; 

	// declaring switch cases 
	switch (var) { 
	case 1: 
		printf("Case 1 is executed"); 
		break; 
	case 2: 
		printf("Case 2 is executed"); 
		break; 
	default: 
		printf("Default Case is executed"); 
		break; 
	} 

	return 0; 
}

//7
// C Program to illustrate the use of conditional operator 
#include <stdio.h> 

// driver code 
int main() 
{ 

	int var; 
	int flag = 0; 

	// using conditional operator to assign the value to var 
	// according to the value of flag 
	var = flag == 0 ? 25 : -25; 
	printf("Value of var when flag is 0: %d\n", var); 

	// changing the value of flag 
	flag = 1; 
	// again assigning the value to var using same statement 
	var = flag == 0 ? 25 : -25; 
	printf("Value of var when flag is NOT 0: %d", var); 

	return 0; 
}

//8
// C program to illustrate 
// to show usage of break 
// statement 
#include <stdio.h> 

void findElement(int arr[], int size, int key) 
{ 
	// loop to traverse array and search for key 
	for (int i = 0; i < size; i++) { 
		if (arr[i] == key) { 
			printf("Element found at position: %d", 
				(i + 1)); 
			break; 
		} 
	} 
} 

int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6 }; 

	// no of elements 
	int n = 6; 

	// key to be searched 
	int key = 3; 

	// Calling function to find the key 
	findElement(arr, n, key); 

	return 0; 
}
