#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
	
	int PScheduler(void);

  printf(1, "\n This program tests the correctness of your lab#2\n");
  
	PScheduler();
	return 0;
 }
  
    
     int PScheduler(void){
		 
    // use this part to test the priority scheduler. Assuming that the priorities range between range between 0 to 31
    // 0 is the highest priority and 31 is the lowest priority.  

  int pid;
  int i,j,k;
  
    printf(1, "\n  Step 2: testing the priority scheduler and setpriority(int priority)) systema call:\n");
    printf(1, "\n  Step 2: Assuming that the priorities range between range between 0 to 31\n");
    printf(1, "\n  Step 2: 0 is the highest priority. All processes have a default priority of 10\n");
    printf(1, "\n  Step 2: The parent processes will switch to priority 0\n");
    set_prior(0);
    for (i = 0; i <  4; i++) {
	pid = fork();
	if (pid > 0 ) {
		continue;}
	else if ( pid == 0) {
		//printf(1,"\n the priority value is %d ! \n",30-10*i);
		set_prior(40-10*i);
	//	printf(1,"\n It has a priorty value of %d \n",get_prior());
			
		for (j=0;j<500000;j++) {
			for(k=0;k<1000;k++) {
				asm("nop"); }}
		printf(1, "\n child# %d with priority %d has finished! \n",getpid(),get_prior());		
		exit();
        }
        else {
			printf(2," \n Error \n");
			
        }
	}

	if(pid > 0) {
		for (i = 0; i <  4; i++) {
			wait();

		}
                     printf(1,"\n if processes with highest priority finished first then its correct \n");
}
	exit();		
	return 0;}
