//1
// C program to illustrate the arithmatic operators 
#include <stdio.h> 

int main() 
{ 

	int a = 25, b = 5; 

	// using operators and printing results 
	printf("a + b = %d\n", a + b); 
	printf("a - b = %d\n", a - b); 
	printf("a * b = %d\n", a * b); 
	printf("a / b = %d\n", a / b); 
	printf("a % b = %d\n", a % b); 
	printf("+a = %d\n", +a); 
	printf("-a = %d\n", -a);    
	printf("a++ = %d\n", a++); 
	printf("a-- = %d\n", a--); 

	return 0; 
}

//2
// C program to illustrate the relational operators 
#include <stdio.h> 

int main() 
{ 

	int a = 25, b = 5; 

	// using operators and printing results 
	printf("a < b : %d\n", a < b); 
	printf("a > b : %d\n", a > b); 
	printf("a <= b: %d\n", a <= b); 
	printf("a >= b: %d\n", a >= b); 
	printf("a == b: %d\n", a == b); 
	printf("a != b : %d\n", a != b); 

	return 0; 
}


//3
// C program to illustrate the bitwise operators 
#include <stdio.h> 

int main() 
{ 

	int a = 25, b = 5; 

	// using operators and printing results 
	printf("a & b: %d\n", a & b); 
	printf("a | b: %d\n", a | b); 
	printf("a ^ b: %d\n", a ^ b); 
	printf("~a: %d\n", ~a); 
	printf("a >> b: %d\n", a >> b); 
	printf("a << b: %d\n", a << b); 

	return 0; 
}

//4
// C program to illustrate the arithmatic operators 
#include <stdio.h> 

int main() 
{ 

	int a = 25, b = 5; 

	// using operators and printing results 
	printf("a = b: %d\n", a = b); 
	printf("a += b: %d\n", a += b); 
	printf("a -= b: %d\n", a -= b); 
	printf("a *= b: %d\n", a *= b); 
	printf("a /= b: %d\n", a /= b); 
	printf("a %= b: %d\n", a %= b); 
	printf("a &= b: %d\n", a &= b); 
	printf("a |= b: %d\n)", a |= b); 
	printf("a >>= b: %d\n", a >> b); 
	printf("a <<= b: %d\n", a << b); 

	return 0; 
}

//5
// C Program to demonstrate the use of Misc operators 
#include <stdio.h> 

int main() 
{ 
	// integer variable 
	int num = 10; 
	int * add_of_num = 
	// # in line 97 

	printf("sizeof(num) = %d bytes\n", sizeof(num)); 
	printf("&num = %p\n", &num); 
	printf("*add_of_num = %d\n", *add_of_num); 
	printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20); 
	printf("(float)num = %f\n", (float)num); 

	return 0; 
}

//6
#include <stdio.h> 

int main() 
{ 
    // integer variable 
    int num = 10; 
    int *add_of_num = &num; // Assign the address of num to add_of_num

    printf("sizeof(num) = %lu bytes\n", sizeof(num)); // Use %lu for size_t
    printf("&num = %p\n", (void *)&num); // Cast to void pointer
    printf("*add_of_num = %d\n", *add_of_num); // Dereference the pointer
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20); 
    printf("(float)num = %f\n", (float)num); // Cast num to float

    return 0;
}
