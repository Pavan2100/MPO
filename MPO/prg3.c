#include <stdio.h>
#include <time.h>
int main() {
    // Record the start time
    clock_t start_time = clock();
    // Display "Hello World" 100 times
    for (int i = 0; i < 100; ++i) {
    printf("Hello World\n");
    }
    // Record the end time
    clock_t end_time = clock();
    // Calculate the time taken
    double time_taken = ((double)(end_time - start_time)) /
    CLOCKS_PER_SEC;
    // Display the time taken
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}
/**********************************************************
**********************/