//1
// C program to demonstrate the 
// working of strftime()
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#define Size 50

int main ()
{
	time_t t ;
	struct tm *tmp ;
	char MY_TIME[Size];
	time( &t );
	
	//localtime() uses the time pointed by t ,
	// to fill a tm structure with the 
	// values that represent the 
	// corresponding local time.
	
	tmp = localtime( &t );
	
	// using strftime to display time
	strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp);
	
	printf("Formatted date & time : %s\n", MY_TIME );
	return(0);
}

//2
// C implementation of digital clock
#include <stdio.h>
#include <time.h>

// driver code
int main()
{
	time_t s, val = 1;
	struct tm* current_time;

	// time in seconds
	s = time(NULL);

	// to get current time
	current_time = localtime(&s);

	// print time in minutes,
	// hours and seconds
	printf("%02d:%02d:%02d",
		current_time->tm_hour,
		current_time->tm_min,
		current_time->tm_sec);

	return 0;
}
