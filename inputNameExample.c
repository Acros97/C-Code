#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[15]; 
    printf("Introduce tu nombre:  ");
    fgets(nombre,15,stdin); // stdin = standard input
    printf("Tu nombre es: %s\n", nombre);
    system("pause");
    return 0;
}
