#include <stdio.h>
#include <stdlib.h>

// 
//	The purpose of is program is to determine whether a set of given spacial barriers
//	being met with a signal(s) of net amplitude greater than a set threshold. If so then
//	the system should "flip" the signal from low to high for each point within the 
//	barriers.
//
//	A mesh of this types of gates could thus be triggered to fire sequentially
//
//
//	Let's begin in 2D 
//
//
int firstwords() {

	printf("I am alive!\n");

	return 1;
					
}



int main(int argc, char *argv[2]){

	// verify the correct number of arguments
	if (argc != 3){
			
		printf("This script requires 2 input arguments.\n");
		return 0;			
	}

	firstwords();
	
	for (int i = 1; i < argc ; i++){
	
		printf("input %d: %s\n", i, argv[i]);

	}

	return 1;	
}
