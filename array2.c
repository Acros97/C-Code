/*
 * 2023. Daniel Fros
 * Using MINGW Compiler.
 */

#include <stdio.h>

	int main(void){

		const int MAX_DATA = 5;
		int DATA[5]; // Compiler not support MAX_DATA variable. 
		int index = 0;
		int sumResult = 0;

		while(index < MAX_DATA){
			int INPUT = 0;
			printf("Please, put n.%d here:\n",index);
			scanf("%d",&INPUT);
			DATA[index] = INPUT;
			index++;
		}

		printf("\nResult:\n");
		for(int i = 0; i < MAX_DATA; i++){
			sumResult += DATA[i];
			printf("%d\n",DATA[i]);

		}

		if(sumResult > 0)
			printf("\n\nSum result is => %d\n",sumResult);

		return 0;

	};
