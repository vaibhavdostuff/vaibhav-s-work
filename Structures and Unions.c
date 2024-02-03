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
