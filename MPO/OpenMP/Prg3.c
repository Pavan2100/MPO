/*** thread_id of each thread ***/
#include <stdio.h>
#include <omp.h>
int main() {
 
// start of OpenMP parallel region
 #pragma omp parallel
 {
 printf("My thread id is %d\n", omp_get_thread_num());
 } 
// OpenMP parallel region ends here

 printf("\nI'm the master thread!\n");
 return 0;
}

/*Note: OpenMp comes pre-installed with all gcc 
/*** compile it with OpenMP support using the -fopenmp flag
with GCC ***/
/*** gcc -fopenmp filename.c ***/
/***** Sample output when code is executed on a quad-core 
*****/
/*My thread id is 1
My thread id is 2
My thread id is 0
My thread id is 3
I'm the master thread!
{Note: 0 is the master thread_id}
{{ thread IDs are assigned dynamically, and the order of 
their appearance in the output may change between different
runs.}*/