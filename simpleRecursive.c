#include <stdio.h>

void recursive_count_down(int n){
	if(n == 0){
		printf("Blast off\n");
	}
	else{
		printf("time is %d\n",n);
		recursive_count_down(n - 1);
	}


}


int main(){

	recursive_count_down(10);


}
