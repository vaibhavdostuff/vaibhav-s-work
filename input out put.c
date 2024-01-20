//1
// C program to show input and output

#include <stdio.h>

int main()
{

	// Declare the variables
	int num;
	char ch;
	float f;

	// --- Integer ---

	// Input the integer
	printf("Enter the integer: ");
	scanf("%d", &num);

	// Output the integer
	printf("\nEntered integer is: %d", num);

	// --- Float ---

	//For input Clearing buffer
	while((getchar()) != '\n');

	// Input the float
	printf("\n\nEnter the float: ");
	scanf("%f", &f);

	// Output the float
	printf("\nEntered float is: %f", f);

	// --- Character ---

	// Input the Character
	printf("\n\nEnter the Character: ");
	scanf("%c", &ch);

	// Output the Character
	printf("\nEntered character is: %c", ch);

	return 0;
}

//2
// C program to show input and output

#include <stdio.h>

int main()
{

	// Declare string variable
	// as character array
	char str[50];

	// --- String ---
	// To read a word

	// Input the Word
	printf("Enter the Word: ");
	scanf("%s\n", str);

	// Output the Word
	printf("\nEntered Word is: %s", str);

	// --- String ---
	// To read a Sentence

	// Input the Sentence
	printf("\n\nEnter the Sentence: ");
	scanf("%[^\n]\ns", str);

	// Output the String
	printf("\nEntered Sentence is: %s", str);

	return 0;
}
