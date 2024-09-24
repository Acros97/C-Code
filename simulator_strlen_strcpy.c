#include <stdio.h>

void my_strcpy(char *dest, const char *src){ 
    printf("Mem. direction source: %p\n", src);
    printf("Value source: %c\n",*src);

    *dest = *src; /*el valor del parametro src se guarda en la 
    dirección de memoria destino. */ 
    //*dest = "\0"; --- terminar con \0 por si es una cadena de caracteres

    printf("Mem. direction destination: %p\n",dest);

}



int main(){
    printf("Hello World!\n");
    char character[10];
    my_strcpy(character,"A");
    printf("destination value: %s\n",character);
    printf("character mem. direction: %p\n",&character);
    return 0;
}