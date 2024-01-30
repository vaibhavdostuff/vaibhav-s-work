//1
// C program to demonstrate Boolean to String
// Conversion using conditional statements
#include <stdbool.h>
#include <stdio.h>
int main()
{

	bool n = true;
	if (n == true) {
		printf("true");
	}
	else {
		printf("false");
	}
	return 0;
}

//2
// C program to demonstrate Boolean to String
// Conversion using ternary operator
#include <stdbool.h>
#include <stdio.h>
int main()
{

	bool n = true;

	const char* s = (n == true) ? "true" : "false";
	printf("%s", s);
	return 0;
}
