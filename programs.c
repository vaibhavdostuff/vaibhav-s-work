//1
// C program to demonstrate
// an invalid memory access error
#include <stdio.h>
int a[5];
int main()
{
	int s = a[-11];
	printf("%d", s);
	return 0;
}

//2
// C program to demonstrate
// an error occurred by dividing 0
#include <stdio.h>

int main()
{
	int a = 5;
	printf("%d", a / 0);
	return 0;
}

//3
// C program to demonstrate
// an error of segmentation faults
#include <stdio.h>

int main()
{
	int GFG[5];
	GFG[10] = 10;
	return 0;
}

//4
// C program to demonstrate
// an error of large memory allocation
#include <stdio.h>

int main()
{
	int GFG[10000000000];
	printf("%d", GFG);
	return 0;
}

//5
// C program to demonstrate
// a common error
#include <stdio.h>

int main()
{
	long int GFG;
	scanf("%d", &GFG);
	return 0;
}

//6
// C program to demonstrate
// a syntax error due to 
// missing semi colon
#include <stdio.h>

// Driver code
int main() 
{
// missing semicolon
printf("Geeks for geeks!") 
return 0;
}

//7
// C program to demonstrate
// a syntax error due to
// missing parenthesis
#include <stdio.h>

// Driver code
int main() 

printf("Geeks for Geeks");
return 0;
}
