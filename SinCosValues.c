#include <stdio.h>
#include <math.h>

  int main(void)
  {

	  double interval;

	  //Table of sine fist.
	  printf("TABLE OF SINE:\n");

	  // i == 11 -> shows sine value of 1.0
	  for(int i = 0; i < 11; i++){
		  interval = i/10.0;
		  printf("sine of (%lf) = %lf\n",interval,sin(interval));
	  }
	  // Use separator
	  printf("\n\n");
	  // Table of cosine
	  printf("TABLE OF COSINE:\n");
	  // initialize interval value to 0
	  interval = 0.0;
	  for(int i = 0; i < 11; i++){
		  interval = i /10.0;
		  printf("cosine of (%lf) = %lf\n", interval, cos(interval));

	  }

	  printf("\n************END************");

	  return 0;
  }
