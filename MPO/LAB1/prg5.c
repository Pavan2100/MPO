//5. Write a C program to display the current time.

#include<stdio.h>
#include<time.h>

int main()
{
    time_t currentTime;
    time(&currentTime);

    //printf("Current Time: %ld\n", currentTime);

    //to convert into human readable
    char *timeString = ctime(&currentTime);
    printf("Current Time: %s\n", timeString);

    return 0;
}