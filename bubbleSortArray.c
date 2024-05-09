// May 9. Using gcc compiler
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print_array(int how_many,int data[], char *str){
int i;
printf("%s",str);

for(int i = 0; i < how_many; i++)
	printf("%d\t",data[i]);

}

void bubble(int data[], int how_many)
{
  int i, j;
  int go_on;

  for(int i = 0; i < how_many; i++){
   print_array(how_many,data,"\ninside bubble\n");
   printf("i = %d, input any int to continue:",i);
	   scanf("%d",&go_on);
   for(j = how_many - 1; j > i; j--)
  }
}

int main(void){
  const int SIZE = 5;
  int grades[SIZE];
  // It initialized manually, depending on the compiler being used.
  grades[0]  = 78;
  grades[1] = 67;
  grades[2] = 92;
  grades[3] = 83;
  grades[4] = 88;
      
  print_array(SIZE, grades, "My grades\n");
  printf("\n\n");
  bubble(grades,SIZE);
  print_array(SIZE, grades, "My sorted grades\n");
  printf("\n\n");
  return 0;		
 }
