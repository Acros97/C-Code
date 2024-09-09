/* ======================
Using Gcc compiler. 2024
=========================
*/
	
	#include <stdio.h>

int fibonacci(int number){
	if(number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2);
	else if(number == 2)
		return 1;
	else if (number == 1)
		return 1;
	else if (number == 0)
		return 0;
}


int main(void){
	int number;
	// Fibonacci es una sucesion infinita, se imprimen hasta los primeros 20 digitos
	for(number = 0; number <=20; number++ ){
		printf("%d\n", fibonacci(number));
	}


	return 0;
}
