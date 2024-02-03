// 4. Write a simple C program to generate a random number 
// between 1 and 100.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int Ran_num = rand()%100;     //To generate 1-100 num

    printf("Random number: %d\n", Ran_num);
    return 0;
}