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

//3
// C program for implementation of ftoa() 
#include <math.h> 
#include <stdio.h> 

// Reverses a string 'str' of length 'len' 
void reverse(char* str, int len) 
{ 
	int i = 0, j = len - 1, temp; 
	while (i < j) { 
		temp = str[i]; 
		str[i] = str[j]; 
		str[j] = temp; 
		i++; 
		j--; 
	} 
} 

// Converts a given integer x to string str[]. 
// d is the number of digits required in the output. 
// If d is more than the number of digits in x, 
// then 0s are added at the beginning. 
int intToStr(int x, char str[], int d) 
{ 
	int i = 0; 
	while (x) { 
		str[i++] = (x % 10) + '0'; 
		x = x / 10; 
	} 

	// If number of digits required is more, then 
	// add 0s at the beginning 
	while (i < d) 
		str[i++] = '0'; 

	reverse(str, i); 
	str[i] = '\0'; 
	return i; 
} 

// Converts a floating-point/double number to a string. 
void ftoa(float n, char* res, int afterpoint) 
{ 
	// Extract integer part 
	int ipart = (int)n; 

	// Extract floating part 
	float fpart = n - (float)ipart; 

	// convert integer part to string 
	int i = intToStr(ipart, res, 0); 

	// check for display option after point 
	if (afterpoint != 0) { 
		res[i] = '.'; // add dot 

		// Get the value of fraction part upto given no. 
		// of points after dot. The third parameter 
		// is needed to handle cases like 233.007 
		fpart = fpart * pow(10, afterpoint); 

		intToStr((int)fpart, res + i + 1, afterpoint); 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	char res[20]; 
	float n = 233.007; 
	ftoa(n, res, 4); 
	printf("\"%s\"\n", res); 
	return 0; 
} 

//4
// C Program to demonstrate 
// Double to String Conversion 
#include <stdio.h> 

int main() 
{ 
	double n = 456321.7651234; 
	char str[100]; 
	sprintf(str, "%f", n); 
	printf("the string is: %s\n", str); 
	return 0; 
}

//5
// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// To store Number in String form.
	char string[10] = "1234567890";
	long integer;

	// Base is 10 because we are converting to integer.
	integer = strtol(string, NULL, 10);
	printf("Number is %lu", integer);
}

//6
// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[40] = "100 GeeksforGeeks";
	long integer;
	char* ptr;

	// strtol function to convert number in string form to
	// long integer with base 10
	integer = strtol(string, &ptr, 10);
	printf("Integer part is %lu\n", integer);
	printf("String part is %s\n", ptr);

	return 0;
}

//7
#include <stdlib.h>
#include <stdio.h>
int main()
{
	long l;
	char *str;
	str = "349639 geeksforgeeks";
	l = atol(str); 
printf("l = %.ld\n",l);
}
