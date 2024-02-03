// 6. Write a C program to find the execution time of 
// outputting Hello world 10 times and 10,000 times 
// respectively.

#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start_time = clock();

    //Display Hello World 10 times;

    for(int i=0; i<10; i++){
        printf("Hello World\n");
    }

    printf("------******------");

    //Display Hello World 10000 times;

    for(int i=0; i<10000; i++){
        printf("Hello World\n");
    }

    clock_t end_time = clock();

    double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Total time: %f\n", total_time);

    return 0;

}