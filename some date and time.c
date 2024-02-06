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

//3
// C program to print digital
// clock using graphics
#include <graphics.h>
#include <time.h>

// driver code
int main()
{
	// DETECT is a macro defined in
	// "graphics.h" header file
	int dt = DETECT, gmode, midx, midy;
	long current_time;
	char strftime[30];

	// initialize graphic mode
	initgraph(&dt, &gmode, "");

	// to find mid value in horizontal
	// and vertical axis
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	// set current colour to white
	setcolor(WHITE);

	// make a rectangular box in
	// the middle of screen
	rectangle(midx - 200, midy - 40, midx + 200, 
									midy + 40);

	// fill rectangle with white color
	floodfill(midx, midy, WHITE);
	while (!kbhit()) {

		// get current time in seconds
		current_time = time(NULL);

		// store time in string
		strcpy(strftime, ctime(¤t_time));

		// set color of text to red
		setcolor(RED);

		// set the text justification
		settextjustify(CENTER_TEXT, CENTER_TEXT);

		// to set styling to text
		settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

		// locate position to write
		moveto(midx, midy);

		// print current time
		outtext(strftime);
	}
	getch();

	// deallocate memory for graph
	closegraph();
}

//4
// C program to print the month by month 
// calendar for the given year 

#include <stdio.h> 

// Function that returns the index of the 
// day for date DD/MM/YYYY 
int dayNumber(int day, int month, int year) 
{ 

	static int t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	year -= month < 3; 
	return (year + year / 4 
			- year / 100 
			+ year / 400 
			+ t[month - 1] + day) 
		% 7; 
} 

// Function that returns the name of the  
// month for the given month Number  
// January - 0, February - 1 and so on  
char* getMonthName(int monthNumber)  
{  
    char* month;  
  
    switch (monthNumber) {  
    case 0:  
        month = "January";  
        break;  
    case 1:  
        month = "February";  
        break;  
    case 2:  
        month = "March";  
        break;  
    case 3:  
        month = "April";  
        break;  
    case 4:  
        month = "May";  
        break;  
    case 5:  
        month = "June";  
        break;  
    case 6:  
        month = "July";  
        break;  
    case 7:  
        month = "August";  
        break;  
    case 8:  
        month = "September";  
        break;  
    case 9:  
        month = "October";  
        break;  
    case 10:  
        month = "November";  
        break;  
    case 11:  
        month = "December";  
        break;  
    }  
    return month;  
}  
  
//5
// C program to demonstrate getdate() method

#include <dos.h>
#include <stdio.h>

int main()
{
	struct date dt;

	// This function is used to get
	// system's current date
	getdate(&dt);

	printf("System's current date\n");
	printf("%d/%d/%d",
		dt.da_day,
		dt.da_mon,
		dt.da_year);

	return 0;
}

//6
// C program to demonstrate setdate() method

#include <dos.h>
#include <stdio.h>

int main()
{
	struct date dt;

	// This function is used to get
	// system's current date
	getdate(&dt);

	printf("System's current date\n");
	printf("%d/%d/%d",
		dt.da_day,
		dt.da_mon,
		dt.da_year);

	printf("Enter date in the format (date month year)\n");
	scanf("%d%d%d", &dt.da_day, &dt.da_mon, &dt.da_year);

	// This function is used to change
	// system's current date
	setdate(&dt);

	printf("System's new date (dd/mm/yyyy)\n")
		printf("%d%d%d", dt.da_day, dt.da_mon, dt.da_year);

	return 0;
}

//7
// C program for above approach 
#include <stdio.h> 
#include <string.h> 

// Function to find the maximum 
// time possible by replacing 
// each '_' with any digit 
char* maximumTime(char s[]) 
{ 
	// If the first character is '_' 
	if (s[0] == '_') { 

		// If s[1] is '_' or 
		// s[1] is less than 4 
		if ((s[1] == '_') || (s[1] >= '0' && s[1] < '4')) { 

			// Update s[0] as 2 
			s[0] = '2'; 
		} 
		else { // Otherwise, update s[0] = 1 
			s[0] = '1'; 
		} 
	} 

	// If s[1] is equal to '_' 
	if (s[1] == '_') { 

		// If s[0] is equal to '2' 
		if (s[0] == '2') { 
			s[1] = '3'; 
		} 
	// otherwise 
		else { 
			s[1] = '9'; 
		} 
	} 

	// If S[3] is equal to '_' 

	if (s[3] == '_') { 

		s[3] = '5'; 
	} 

	// If s[4] is equal to '_' 

	if (s[4] == '_') { 

		s[4] = '9'; 
	} 

	return s; // Return the modified string 
} 
int main() 
{ 
	char S[] = "0_:4_"; 
	printf("%s", maximumTime(S)); 
	return 0; 
} 

// This code is contributed by Tapesh (tapeshdua420)

//8
// C program to illustrate the gmtime() function
#include <stdio.h>
#include <time.h>
#define CST (+8)
#define IND (-5)

int main()
{

	// object
	time_t current_time;

	// pointer
	struct tm* ptime;

	// use time function
	time(¤t_time);

	// gets the current-time
	ptime = gmtime(¤t_time);

	// print the current time
	printf("Current time:\n");

	printf("Beijing ( China ):%2d:%02d:%02d\n",
		(ptime->tm_hour + CST) % 24, ptime->tm_min,
		ptime->tm_sec);

	printf("Delhi ( India ):%2d:%02d:%02d\n",
		(ptime->tm_hour + IND) % 24, ptime->tm_min,
		ptime->tm_sec);
	return 0;
}

//9
// C++ program to illustrate the 
// gmtime() function 
#include <stdio.h> 
#include <time.h> 
#define UTC (0) 
#define ART (-3) 

int main() 
{ 
	// object
	time_t current_time;
	
	// pointer
	struct tm* ptime; 
	
	// use time function
	time(¤t_time); 

	// print the current time
	ptime = gmtime(¤t_time); 
	printf("Current time:\n"); 
	printf("Monrovia ( Liberia ) :%2d:%02d:%02d\n", 
		(ptime->tm_hour + UTC) % 24, ptime->tm_min, ptime->tm_sec); 

	printf("Buenos Aires ( Argentina ) :%2d:%02d:%02d\n", 
		(ptime->tm_hour + ART) % 24, ptime->tm_min, ptime->tm_sec); 
	return 0; 
} 
