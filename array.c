//1
// C Program to illustrate the array declaration
#include <stdio.h>

int main()
{

	// declaring array of integers
	int arr_int[5];
	// declaring array of characters
	char arr_char[5];

	return 0;
}

//2
// C Program to demonstrate array initialization
#include <stdio.h>

int main()
{

	// array initialization using initialier list
	int arr[5] = { 10, 20, 30, 40, 50 };

	// array initialization using initializer list without
	// specifying size
	int arr1[] = { 1, 2, 3, 4, 5 };

	// array initialization using for loop
	float arr2[5];
	for (int i = 0; i < 5; i++) {
		arr2[i] = (float)i * 2.1;
	}
	return 0;
}

//3
// C Program to illustrate element access using array
// subscript
#include <stdio.h>

int main()
{

	// array declaration and initialization
	int arr[5] = { 15, 25, 35, 45, 55 };

	// accessing element at index 2 i.e 3rd element
	printf("Element at arr[2]: %d\n", arr[2]);

	// accessing element at index 4 i.e last element
	printf("Element at arr[4]: %d\n", arr[4]);

	// accessing element at index 0 i.e first element
	printf("Element at arr[0]: %d", arr[0]);

	return 0;
}

//4
// C Program to demonstrate the use of array
#include <stdio.h>

int main()
{
	// array declaration and initialization
	int arr[5] = { 10, 20, 30, 40, 50 };

	// modifying element at index 2
	arr[2] = 100;

	// traversing array using for loop
printf("Elements in Array: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

//5
// C Program to illustrate the use of 1D array
#include <stdio.h>

int main()
{

	// 1d array declaration
	int arr[5];

	// 1d array initialization using for loop
	for (int i = 0; i < 5; i++) {
		arr[i] = i * i - 2 * i + 1;
	}

	printf("Elements of Array: ");
	// printing 1d array by traversing using for loop
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

//6
// C Program to illustrate strings
#include <stdio.h>

int main()
{

	// creating array of character
	char arr[6] = { 'G', 'e', 'e', 'k', 's', '\0' };

	// printing string
	int i = 0;
	while (arr[i]) {
		printf("%c", arr[i++]);
	}
	return 0;
}

//7
// C Program to illustrate 2d array
#include <stdio.h>

int main()
{

	// declaring and initializing 2d array
	int arr[2][3] = { 10, 20, 30, 40, 50, 60 };

printf("2D Array:\n");
	// printing 2d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//8
// C Program to illustrate the 3d array
#include <stdio.h>

int main()
{

	// 3D array declaration
	int arr[2][2][2] = { 10, 20, 30, 40, 50, 60 };

	// printing elements
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n \n");
	}
	return 0;
}

//9
// C Program to demonstrate the relation between arrays and
// pointers
#include <stdio.h>

int main()
{

	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = &arr[0];

	// comparing address of first element and address stored
	// inside array name
	printf("Address Stored in Array name: %p\nAddress of "
		"1st Array Element: %p\n",
		arr, &arr[0]);

	// printing array elements using pointers
	printf("Array elements using pointer: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr++);
	}
	return 0;
}

//10
// C Program to pass an array to a function
#include <stdio.h>

void printArray(int arr[])
{
	printf("Size of Array in Functions: %d\n", sizeof(arr));
	printf("Array Elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ",arr[i]);
	}
}

// driver code
int main()
{

	int arr[5] = { 10, 20, 30, 40, 50 };

	printf("Size of Array in main(): %d\n", sizeof(arr));
	printArray(arr);
	return 0;
}

//11
// C Program to return array from a function
#include <stdio.h>

// function
int* func()
{
	static int arr[5] = { 1, 2, 3, 4, 5 };

	return arr;
}

// driver code
int main()
{

	int* ptr = func();

	printf("Array Elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr++);
	}
	return 0;
}

//12
// This C program compiles fine
// as index out of bound
// is not checked in C.

#include <stdio.h>

int main()
{
	int arr[2];

	printf("%d ", arr[3]);
	printf("%d ", arr[-2]);

	return 0;
}

//13
#include <stdio.h>
int main()
{

	// Array declaration by initializing it 
	// with more elements than specified size.
	int arr[2] = { 10, 20, 30, 40, 50 };

	return 0;
}

//14
// C Program to perform input and output on array
#include <stdio.h>

int main()
{

	// declaring an integer array
	int arr[5];

	// taking input to array elements one by one
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	// printing array elements
	printf("Array Elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

//15
// C Program to the average to two numbers
#include <stdio.h>

// function to calculate average of the function
float getAverage(float* arr, int size)
{

	int sum = 0;
	// calculating cumulative sum of all the array elements
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	// returning average
	return sum / size;
}

// driver code
int main()
{

	// declaring and initializing array
	float arr[5] = { 10, 20, 30, 40, 50 };
	// size of array using sizeof operator
	int n = sizeof(arr) / sizeof(float);

	// printing array elements
	printf("Array Elements: ");
	for (int i = 0; i < n; i++) {
		printf("%.0f ", arr[i]);
	}

	// calling getAverage function and printing average
	printf("\nAverage: %.2f", getAverage(arr, n));
	return 0;
}
