#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>


int main( void )
{
	double trouble = exp(1000.0);
	if ( errno ) {
		printf("trouble: %f (errno: %d) (EXIT_FAILURE: %d)\n", trouble, errno, EXIT_FAILURE);
		exit(EXIT_FAILURE);
	}

	return 0;
}
