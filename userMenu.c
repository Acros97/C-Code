/*
===============
Using MinGW compiler
Daniel Fros. 2024.
Example of an iteration based on a number expressed in hexadecimal.
*/ 


#include <stdio.h>

int main(){
    
    printf("Hello World!\n");
    int _value = 0x1A;

    int i = 0;
    while(i < _value){
        printf("value = %d\n",i);
        i++;
    }

    
    return 0;

}