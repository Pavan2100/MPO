/*I) Generating Random Number:
###########################
In C, you can use the rand() function to generate a random 
number. {{However, the rand() function alone will produce 
the same sequence of random numbers every time the program 
runs (in the same second) unless you use srand() to seed 
the random number generator with a different value. You can
use the current time as a seed for better randomness}}.
A simple program to generate a Random number : 
(seed initialised to a number, in this case seed 
initialised to current time)*/
/**********************************************************
**********************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ABX(x,y) x##y
int main() {
    // Seed the random number generator with the current time
    srand(time(NULL)); // Current time is taken as the seed; 
    
    // Generate a random number and print it
    //int randomNumber = rand();

    //For example, to generate a random number between 0 and 99, you can use rand()%100.
    //int randomNumber = rand()%100;

    //For example, to generate a random number between 0 and 99, you can use rand()%10.
    int randomNumber = rand()%10;
    printf("Random Number: %d\n", ABX(random,Number));
    return 0;
}
/**********************************************************
**/