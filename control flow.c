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
