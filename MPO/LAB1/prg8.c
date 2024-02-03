// 8. Write a C program to populate a matrix of size 20*50 by 
// generating random numbers in the range 101 to 201. Display 
// the matrix to the screen. Also determine the smallest, 
// largest, as well as the sum of all the elements of the 
// matrix and display the results to the screen. Find the 
// total time taken for the execution of your computations and
// output the value.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 20
#define COL 50

int main()
{
    time_t start_time = clock();

    int a[ROW][COL];
    int num = a[0][0];
    int sum=0;
    srand(time(NULL));

    //Populating matrix by random numbers
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            a[i][j] = rand()%100+102;
        }
    }

    //Display matrix
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //To display smallest number
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            if(a[i][j]<num){
                num = a[i][j];
            }
        }
    }
    printf("The smallest number is: %d\n", num);

    //To display largest number
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            if(a[i][j]>num){
                num = a[i][j];
            }
        }
    }
    printf("The largest number is: %d\n", num);

    //To display sum of all the numbers
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            sum += a[i][j];
        }
    }
    printf("The sum of all the numbers is: %d\n", sum);

    time_t end_time = clock();

    double total_time = ((double)(end_time-start_time))/CLOCKS_PER_SEC;
    printf("The total time is: %f\n", total_time);
    return 0;
}
