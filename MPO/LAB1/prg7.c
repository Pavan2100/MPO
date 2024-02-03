// 7. Write a C program to populate a matrix of size 5*10 by 
// generating random numbers in the range 1 to 10. Display the
// matrix to the screen.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 5
#define COL 10

int main()
{
    int a[ROW][COL];
    srand(time(NULL));

    //Populating matrix by random numbers
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            a[i][j] = rand()%10;
        }
    }

    //Display matrix
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;




}