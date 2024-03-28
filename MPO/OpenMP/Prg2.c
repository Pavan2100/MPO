/*** determine the total threads in the parallel region 
***/
#include <stdio.h>
#include <omp.h>
int main() {
 
// start of OpenMP parallel region
 #pragma omp parallel 
 {
 
 printf("Total threads executing the the parallel region = %d\n", omp_get_num_threads());
 } 
// OpenMP parallel region ends here

 printf("\nI'm the master thread!\n");
 return 0;
}
/*** output ***/

/**If you run this program on an 8-core machine, the output 
might look like:
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
Total threads executing the parallel region = 8
I'm the master thread!
{{ Each thread will print the same total number of threads 
in the parallel region, and the "I'm the master thread!" **/
