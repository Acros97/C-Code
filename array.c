#include <stdio.h>

	int main(){
		// Declare and Inizializes arrays
		int data[5] = {1,5,6,18,20};
		char letters[] = "a b c";

		printf("-------------Numbers-------------\n");
		for(int i = 0; i < 5; i++)
			printf("%d\n",data[i]);

		printf("-------------Chars-------------\n");
		for(int i = 0; i < 5; i++)
			printf("%c\n",letters[i]);

		return 0;
	}
