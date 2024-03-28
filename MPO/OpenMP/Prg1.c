/*** hello from each thread ***/
#include <stdio.h>
#include <omp.h>
int main() {
 
// start of OpenMP parallel region
 #pragma omp parallel
 {
 printf("Hello from thread %d\n", omp_get_thread_num());
 } 
// OpenMP parallel region ends here
 printf("\nI'm the master thread!\n");
 return 0;
}



/*Note: OpenMp comes pre-installed with all gcc*/
/*** compile it with OpenMP support using the -fopenmp flag
with GCC ***/
/*** gcc -fopenmp filename.c ***/
/***** Sample output when code is executed on a quad-core 
*****/
/*Hello from thread 0
Hello from thread 1
Hello from thread 2
Hello from thread 4
Hello from thread 7
Hello from thread 5
Hello from thread 6
Hello from thread 3
I'm the master thread!*/
