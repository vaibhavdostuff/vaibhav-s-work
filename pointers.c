//1
// C program to illustrate Pointers
#include <stdio.h>

void geeks()
{
	int var = 10;

	// declare pointer variable
	int* ptr;

	// note that data type of ptr and var must be same
	ptr = &var;

	// assign the address of a variable to a pointer
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

// Driver program
int main()
{
	geeks();
	return 0;
}

//2
// C Program to find the size of different pointers types
#include <stdio.h>

// dummy structure
struct str {
};

// dummy function
void func(int a, int b){};

int main()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct str x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct str* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_vn = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%d bytes\n",
		sizeof(ptr_int));
	printf("Size of Character Pointer\t:\t%d bytes\n",
		sizeof(ptr_char));
	printf("Size of Structure Pointer\t:\t%d bytes\n",
		sizeof(ptr_str));
	printf("Size of Function Pointer\t:\t%d bytes\n",
		sizeof(ptr_func));
	printf("Size of NULL Void Pointer\t:\t%d bytes",
		sizeof(ptr_vn));

	return 0;
}

//3
// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
	return 0;
}

//4
// C Program to access array elements using pointer
#include <stdio.h>

void geeks()
{
	// Declare an array
	int val[3] = { 5, 10, 15 };

	// Declare pointer variable
	int* ptr;

	// Assign address of val[0] to ptr.
	// We can use ptr=&val[0];(both are same)
	ptr = val;

	printf("Elements of the array are: ");

	printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

	return;
}

// Driver program
int main()
{
	geeks();
	return 0;
}
