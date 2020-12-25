#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num_in[2];
	float float_in[2];
	
	scanf("%i %i", &num_in[0], &num_in[1]);
	scanf("%f %f", &float_in[0], &float_in[1]);
	
	printf("%i %i\n", num_in[0]+num_in[1], num_in[0]-num_in[1]);
	printf("%0.1f %0.1f\n", float_in[0]+float_in[1], float_in[0]-float_in[1]);

	return 0;
}
