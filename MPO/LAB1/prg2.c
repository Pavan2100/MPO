// 2. Write a C program to generate a random number in C with
// initializing the seed for the random number generator {With
// every run you should observe a differnt random number}.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));      //seed to get a different random number

    int Ran_num = rand();

    printf("Random number: %d\n", Ran_num);
}