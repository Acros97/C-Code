// Oct. 2024. Daniel Fros

#include <stdio.h>
// defining a struct for data and other stuff
typedef struct {
    int *data;
    size_t size;
    size_t capacity;    
} IntList;

void init_list(IntList *list){
    list->capacity = 3; // default 3 (optional)
    list->size = 5; // default 5 (optional)
    list->data = malloc(list->capacity * sizeof(int)); // dinamic data assigment * capacity
   
   // list->data = NULL;  // -> FORCING DATA == NULL
    if(list -> data == NULL){
        printf("Assigment error\n");
        exit(1);
    }
}



int main(){

    printf("===TESTING===\n");
    IntList listData; // not a pointer
    init_list(&listData); // listData as a pointer

    printf("capacity: %zu\n", listData.capacity);
    printf("size: %zu\n", listData.size);
    printf("Dinamic data assigment space mem. direction: %p\n", (void*)listData.data);  // Show memory direction of 'data'
    listData.data = 123;    
    printf("Dinamic data value assigment: %d\n",listData.data);
    // free the memory
    free(listData.data);
    

    return 0;
}