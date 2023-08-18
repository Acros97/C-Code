/*
 * August 18, 2023.
 * Daniel Fros.
 * */
#include <stdio.h>
#include <math.h>

int main(void){
 float fahrenheit,celcius;
 printf("Please enter fahrenheit value: \n");
 scanf("%f",&fahrenheit);
 // Convert to celcius
 celcius = (fahrenheit - 32)/1.8;
 printf("\n %f fahrenheit is %f celcius.\n",fahrenheit,celcius);
 return 0;

}
