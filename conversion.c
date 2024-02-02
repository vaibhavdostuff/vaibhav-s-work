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

//8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	long i = 1234;
	char buffer[100];

	ltoa(i, buffer, 10);
	printf("string is %s\n", buffer);
	return 0;
}

//9
// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>

// Driver Code
int main()
{
	// To store Number in String form.
	char string[10] = "123456789";
	long integer = 0;

	int i = 0;

	// Until null character is encountered
	while (string[i] != '\0') {
		integer = (integer * 10) + (string[i] - '0');
		i++;
	}

	// Printing the number
	printf("Number is %lu", integer);
}

//10
#include <stdio.h>
#include <string.h>

long stringToLong(char *str) {
	long result = 0;
	int sign = 1, i = 0;
	if (str[0] == '-') {
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++) {
		result = result * 10 + str[i] - '0';
	}
	return sign * result;
}

int main() {
	char str[] = "123456789";
	long result = stringToLong(str);
	printf("%ld\n", result);
	return 0;
}

//11
#include <stdio.h>
#include <stdlib.h>

int main() {
	char input[100] = "123456789";
	long num;
	sscanf(input, "%ld", &num);
	printf("%ld\n", num);
	return 0;
}

//12
// C Program for Long to 
// String Conversion 
#include <stdio.h> 
#include <string.h> 

#define Max_Digits 10 
int main() 
{ 
	long N = 1243; 
	char str[Max_Digits + sizeof(char)]; 
	sprintf(str, "%ld", N); 
	printf("string is: %s \n", str); 
}

//13
// C Program for Long to String Conversion 
#include <stdio.h> 

int main() 
{ 

	long x = 1234; 
	char str[256]; 
	sprintf(str, "%ld", x); 
	printf("The string is : %s", str); 
	return 0; 
}

//14
// C program to demonstrate
// conversion of int to char
// using typecasting
#include <stdio.h>

// Driver code
int main()
{
	int N = 103;
	printf("%c", (char)(N));
	return 0;
}

//15
// C program to demonstrate conversion of
// int to char using typecasting
#include <stdio.h>

// Driver code
int main()
{
	int N = 71;
	char c = N;
	printf("%c", c);
	return 0;
}

//16
// C program to demonstrate conversion of
// int to char using sprintf()
#include <stdio.h>
int main()
{
	int num = 71;
	char c[1];

	sprintf(c, "%c", num);
	printf("The character value is %s", c);

	return 0;
}

//17
#include <stdio.h>

// Driver code
int main()
{
	int N = 71;
	char c = N+0;
	printf("%c", c);
	return 0;
}

//18
#include <stdio.h>

int main() 
{
	int num=71;
	if (num >= 0 && num <= 127) {
		printf("The character representation of %d is: %c\n", num, num);
	} else {
		printf("The integer %d is out of range for character representation\n", num);
	}
	return 0;
}

//19
// C program to demonstrate conversion of
// octal to decimal using format specifier
#include <stdio.h>

// Driver code
int main()
{
	int n;
	printf("Enter an Octal number: \n");
	scanf("%o", &n);

	// printing the result
	printf("\nDecimal Representation is: %d", n);
	return 0;
}

//20
// C program to demonstrate conversion of
// octal to decimal without using pow()
#include <stdio.h>

// Function to convert octal to decimal
int octalToDecimal(int n)
{
	int decimalvalue = 0;

	// Assigning base value to 1, i.e 8^0
	int base = 1;

	int temp = n;

	// while loop executes the statements until the
	// condition is false
	while (temp) 
	{
		// Finding the last digit
		int lastdigit = temp % 10;
		temp = temp / 10;

		// Multiplying last digit with appropriate
		// base value and adding it to decimalvalue
		decimalvalue += lastdigit * base;

		base = base * 8;
	}

	return decimalvalue;
}

// Driver code
int main()
{
	int octalnum = 123;

	printf("decimal number is %d",
		octalToDecimal(octalnum));
}

//21
// C program to demonstrate conversion of
// octal to decimal using pow()
#include <math.h>
#include <stdio.h>

int Octaltodecimal(int octal)
{
	int decimalnumber = 0, i = 0;

	// while loop executes the statements 
	// until the condition is false
	while (octal != 0) 
	{
		// Calculating equivalent decimal number 
		// for the given octal number
		decimalnumber = decimalnumber + 
						(octal % 10) * pow(8, i++);
		octal = octal / 10;
	}
	// printing the result
	return decimalnumber;
}
// Driver code
int main()
{
	int octalnumber = 123;

	// calling function
	printf("decimal number is %d",
		Octaltodecimal(octalnumber));
	return 0;
}

//21
// C program to demonstrate conversion of
// octal to decimal without using functions
#include <math.h>
#include <stdio.h>

// Driver code
int main()
{
	int octalnumber = 123, decimalnumber = 0;
	int i = 0;

	// while loop executes the statements 
	// until the condition is false
	while (octalnumber != 0) 
	{	 
		// Calculating equivalent decimal number 
		// for the given octal number
		decimalnumber = decimalnumber
						+ (octalnumber % 10) * pow(8, i++);
		octalnumber = octalnumber / 10;
	}

	// Printing the result
	printf("decimal number is: %d", decimalnumber);
	return 0;
}

//23
// C program to convert decimal 
// number to octal number 
#include <stdio.h> 

// function to convert decimal to octal 
void decToOctal(int n) 
{ 

	// array to store octal number 
	int octalNum[100]; 

	// counter for octal number array 
	int i = 0; 
	while (n != 0) { 

		// storing remainder in octal array 
		octalNum[i] = n % 8; 
		n = n / 8; 
		i++; 
	} 

	// printing octal number array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		printf("%d", octalNum[j]); 
} 

// Driver Code 
int main() 
{ 
	int n = 33; 

	// Function Call 
	decToOctal(n); 

	return 0; 
}

//24
// C program to convert decimal 
// number to octal number 
#include <stdio.h> 

// function to calculate the octal value of the given 
// decimal number 
void decimaltoOctal(int deciNum) 
{ 

	int octalNum = 0, countval = 1; 
	int dNo = deciNum; 

	while (deciNum != 0) { 
		// decimals remainder is calculated 
		int remainder = deciNum % 8; 

		// storing the octalvalue 
		octalNum += remainder * countval; 

		// storing exponential value 
		countval = countval * 10; 
		deciNum /= 8; 
	} 
	printf("%d", octalNum); 
} 

// Driver Code 
int main() 
{ 
	int n = 33; 

	// Function Call 
	decimaltoOctal(n); 
	return 0; 
}

//25
// C program to demonstrate hexadecimal to decimal 
// conversion using format specifier 

#include <stdio.h> 

int main() 
{ 

	int n; 
	// taking input from user 
	scanf("%x", &n); 
	
	// printing the decimal number 
	printf("%d", n); 
	return 0; 
}

//26
// C program to demonstrate hexadecimal to decimal 
// conversion using switch case 
#include <math.h> 
#include <stdio.h> 
#include <string.h> 
int main() 
{ 

	char hexdecnumber[32] = "2D"; 
	int decimalnumber, i; 
	
	// used to store the power index 
	int cnt; 
	
	// used to store the digit 
	int digit; 

	cnt = 0; 
	decimalnumber = 0; 
	
	// iterating the loop using length of hexadecnumber 
	for (i = (strlen(hexdecnumber) - 1); i >= 0; i--) { 
		
		// using switch case finding the equivalent decimal 
		// digit for each hexa digit 
		switch (hexdecnumber[i]) { 
		case 'A': 
			digit = 10; 
			break; 
		case 'B': 
			digit = 11; 
			break; 
		case 'C': 
			digit = 12; 
			break; 
		case 'D': 
			digit = 13; 
			break; 
		case 'E': 
			digit = 14; 
			break; 
		case 'F': 
			digit = 15; 
			break; 
		default: 
			digit = hexdecnumber[i] - 0x30; 
		} 
		
		// obtaining the decimal number 
		decimalnumber = decimalnumber + (digit)*pow((double)16, (double)cnt); 
		cnt++; 
	} 
	// printing the decimal number 
	printf("Decimal number is: %d", decimalnumber); 
	return 0; 
}

//27
// C program to demonstrate hexadecimal to decimal 
// conversion using an array 
#include <math.h> 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	int decimalNumber = 0; 
	
	// Storing hexa number digits in one array 
	char hexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', 
						'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' }; 
	char hexadecimalnumber[30] = "2D"; 
	int i, j, power = 0, digit; 

	// Converting hexadecimal number to equivalent decimal 
	// number 
	for (i = strlen(hexadecimalnumber) - 1; i >= 0; i--) { 

		// search if given input character is present in the 
		// array or not. if it present in the array then 
		// find the equivalent decimal number for each hexa 
		// digit 
		for (j = 0; j < 16; j++) { 
			if (hexadecimalnumber[i] == hexDigits[j]) { 
				decimalNumber += j * pow(16, power); 
			} 
		} 
		power++; 
	} 
	// printing the result 
	printf("Decimal Number : %d", decimalNumber); 

	return 0; 
}
