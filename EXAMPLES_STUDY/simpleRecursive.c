#include <stdio.h>

void recursive_count_down(int n){
	if(n == 0){
		printf("Blast off\n"); // End loop.
	}
	else{
		printf("time is %d\n",n);
		// the function calls itself.
		recursive_count_down(n - 1);
	}


}


int main(){
	recursive_count_down(10);
}
