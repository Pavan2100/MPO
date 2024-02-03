// 3. Write a simple C program to generate a random number 
// between 0 and 9.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int Ran_num = rand()%10;     //To generate 0-9 num

    printf("Random number: %d\n", Ran_num);
    return 0;
}
