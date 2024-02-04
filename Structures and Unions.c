//1
// C Program to Store Information
// of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student {
	char* name;
	int roll_number;
	int age;
	double total_marks;
};

// Driver code
int main()
{
	int i = 0, n = 5;

	// Create the student's structure variable
	// with n Student's records
	struct Student student[n];

	// Get the students data
	student[0].roll_number = 1;
	student[0].name = "Geeks1";
	student[0].age = 12;
	student[0].total_marks = 78.50;

	student[1].roll_number = 5;
	student[1].name = "Geeks5";
	student[1].age = 10;
	student[1].total_marks = 56.84;

	student[2].roll_number = 2;
	student[2].name = "Geeks2";
	student[2].age = 11;
	student[2].total_marks = 87.94;

	student[3].roll_number = 4;
	student[3].name = "Geeks4";
	student[3].age = 12;
	student[3].total_marks = 89.78;

	student[4].roll_number = 3;
	student[4].name = "Geeks3";
	student[4].age = 13;
	student[4].total_marks = 78.55;

	// Print the Students information
	printf("Student Records:\n\n");
	for (i = 0; i < n; i++) 
	{
		printf("\tName = %s\n", student[i].name);
		printf("\tRoll Number = %d\n", student[i].roll_number);
		printf("\tAge = %d\n", student[i].age);
		printf("\tTotal Marks = %0.2f\n\n", student[i].total_marks);
	}

	return 0;
}

//2
// C program to read Student records 
// like id, name and age, 
// and display them in sorted order by Name 

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// struct person with 3 fields 
struct Student { 
	char* name; 
	int id; 
	char age; 
}; 

// setting up rules for comparison 
// to sort the students based on names 
int comparator(const void* p, const void* q) 
{ 
	return strcmp(((struct Student*)p)->name, 
				((struct Student*)q)->name); 
} 

// Driver program 
int main() 
{ 
	int i = 0, n = 5; 

	struct Student arr[n]; 

	// Get the students data 
	arr[0].id = 1; 
	arr[0].name = "bd"; 
	arr[0].age = 12; 

	arr[1].id = 2; 
	arr[1].name = "ba"; 
	arr[1].age = 10; 

	arr[2].id = 3; 
	arr[2].name = "bc"; 
	arr[2].age = 8; 

	arr[3].id = 4; 
	arr[3].name = "aaz"; 
	arr[3].age = 9; 

	arr[4].id = 5; 
	arr[4].name = "az"; 
	arr[4].age = 10; 

	// Print the Unsorted Structure 
	printf("Unsorted Student Records:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 
	// Sort the structure 
	// based on the specified comparator 
	qsort(arr, n, sizeof(struct Student), comparator); 

	// Print the Sorted Structure 
	printf("\n\nStudent Records sorted by Name:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	return 0; 
} 

//3
// C program for the above approach
#include "stdio.h"

// Struct defined for the inch-feet system
struct InchFeet {
	// Variable to store the inch-feet
	int feet;
	float inch;
};

// Function to find the sum of all N
// set of Inch Feet distances
void findSum(struct InchFeet arr[], int N)
{
	// Variable to store sum
	int feet_sum = 0;
	float inch_sum = 0.0;

	int x;

	// Traverse the InchFeet array
	for (int i = 0; i < N; i++) {
		// Find the total sum of
		// feet and inch
		feet_sum += arr[i].feet;
		inch_sum += arr[i].inch;
	}

	// If inch sum is greater than 11
	// convert it into feet
	// as 1 feet = 12 inch
	if (inch_sum >= 12) {
		// Find integral part of inch_sum
		x = (int)inch_sum;

		// Delete the integral part x
		inch_sum -= x;

		// Add x%12 to inch_sum
		inch_sum += x % 12;

		// Add x/12 to feet_sum
		feet_sum += x / 12;
	}

	// Print the corresponding sum of
	// feet_sum and inch_sum
	printf("Feet Sum: %d", feet_sum);
	printf("Inch Sum: %.2f", inch_sum);
}

// Driver Code
int main()
{
	// Given set of inch-feet
	struct InchFeet arr[]
		= { { 10, 3.7 }, { 10, 5.5 }, { 6, 8.0 } };

	int N = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	findSum(arr, N);

	return 0;
}

//4
// C program to demonstrate
// addition of complex numbers
#include <stdio.h>

// define a structure for complex number
typedef struct complexNumber {
	int real;
	int img;
} complex;

// This function accepts two complex numbers
// as parameter and return addition of
// them.
complex add(complex x, complex y);

// Driver code
int main()
{
	// Define three complex type numbers
	complex a, b, sum;

	// First complex number
	a.real = 2;
	a.img = 3;

	// Second complex number
	b.real = 4;
	b.img = 5;

	// Print first complex number
	printf("\n a = %d + %di", a.real, a.img);

	// print second complex number
	printf("\n b = %d + %di", b.real, b.img);

	// call add(a,b) function and
	// pass complex numbers a & b
	// as an parameter.
	sum = add(a, b);

	// Print result
	printf("\n sum = %d + %di", sum.real, sum.img);

	return 0;
}

// Complex add(complex x, complex y)
// function definition
complex add(complex x, complex y)
{
	// Define a new complex number.
	complex add;

	// Add real part of a&b
	add.real = x.real + y.real;

	// Add Imaginary part of a&b
	add.img = x.img + y.img;

	return (add);
}

//5
// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
struct person {
	int id;
	char fname[20];
	char lname[20];
};

int main()
{
	FILE* outfile;

	// open file for writing
	outfile = fopen("person.bin", "wb");
	if (outfile == NULL) {
		fprintf(stderr, "\nError opened file\n");
		exit(1);
	}

	struct person input1 = { 1, "rohan", "sharma" };

	// write struct to file
	int flag = 0;
	flag = fwrite(&input1, sizeof(struct person), 1,
				outfile);
	if (flag) {
		printf("Contents of the structure written "
			"successfully");
	}
	else
		printf("Error Writing to File!");

	// close file
	fclose(outfile);

	return 0;
}

//6
// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>

// struct person with 3 fields
struct person {
	int id;
	char fname[20];
	char lname[20];
};

// Driver program
int main()
{
	FILE* infile;

	// Open person.dat for reading
	infile = fopen("person1.dat", "wb+");
	if (infile == NULL) {
		fprintf(stderr, "\nError opening file\n");
		exit(1);
	}

	struct person write_struct = { 1, "Rohan", "Sharma" };

	// writing to file
	fwrite(&write_struct, sizeof(write_struct), 1, infile);

	struct person read_struct;

	// setting pointer to start of the file
	rewind(infile);

	// reading to read_struct
	fread(&read_struct, sizeof(read_struct), 1, infile);

	printf("Name: %s %s \nID: %d", read_struct.fname,
		read_struct.lname, read_struct.id);

	// close file
	fclose(infile);

	return 0;
}

//7
struct student {
	int stud_id;
	int name_len;
	int struct_size;
	char stud_name[];
};
