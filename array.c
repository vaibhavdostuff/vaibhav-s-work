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
