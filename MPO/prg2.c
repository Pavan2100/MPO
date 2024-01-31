/*II) CURRENT TIME:
#################
To display the current time in C, you can use the time() 
function to obtain the current time in seconds since the 
epoch and then use the ctime() function to convert it to a 
human-readable string.*/
//Program:
/**********************************************************
************************/
#include <stdio.h>
#include <time.h>
int main() {
    // Get the current time
    time_t currentTime;
    time(&currentTime);

    // Convert the time to a string and display ie human readable
    char* timeString = ctime(&currentTime);
    printf("Current Time: %s", timeString);

    // If you only want to display the hours and minutes of the 
    // current time, you can use the localtime function to convert
    // the time_t value to a structure representing the local 
    // time, and then extract the hours and minutes from that 
    // structure.

    // Convert the time to local time
    struct tm* localTime = localtime(&currentTime);

    // Extract hours and minutes
    int hours = localTime->tm_hour;
    int minutes = localTime->tm_min;

    // Display hours and minutes
    printf("Current Time: %02d:%02d\n", hours, minutes);

    return 0;
}
/**********************************************************
****/