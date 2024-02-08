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

//8
// C program to demonstrate
// a runtime error
#include <stdio.h>

// Driver code 
int main() 
{
int array[5];
printf("%d", array[10]);
return 0;
}

//9
// C program to demonstrate
// a logical error
#include <stdio.h>

// Driver code
int main() 
{
int i; 
for(i = 0; i <= 5; i++); 
{
	printf("Geeks for Geeks");
}
	return 0;
}

//10
// C program to demonstrate
// a linker error
#include <stdio.h>

// Driver code
int Main() 
{
printf("Geeks for Geeks");
return 0;
}

//11
// C program to demonstrate
// a semantic error
#include <stdio.h>

// Driver code
int main() 
{
int x = 10;
	b = 20, c; 
x + y = c;
printf("%d", c);
	return 0;
}

//12
// C program to demonstrate 
// unreachable code error 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	printf("geeks for geeks"); 
	return 0; 
	printf("gfg"); 
} 

//13
// C program to implement 
// the above approach 
#include <stdio.h> 

// Driver code 
int main() 
{ 
int a = 2; 
for (;;) 
{ 
	if (a == 2) 
	{ 
	break; 
		
	// It will never execute, so 
	// same error will be there. 
	printf("GeeksforGeeks"); 
	} 
} 
return 0; 
}
