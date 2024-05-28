// May 28. Using minGW compiler
#include <stdio.h>

void swap(int* arr, int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void bubbleSort(int arr[], int n){
  int i,j; // both used throughout the function.
  for(i =0; i < n - 1;i ++){
      for(j = 0; j < n - i - 1; j ++){
        if(arr[j] > arr[j + 1])
          swap(arr, j , j + 1);
      }
  }
}

void printArray(int arr[], int size){
  int i;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");

}

int main(){
  int arr[] = {5 ,1, 4, 2, 8};
  int SIZE = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr,SIZE);
  printf("Sorted array ");
  printArray(arr,SIZE);
  return 0;
}