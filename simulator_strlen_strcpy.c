#include <stdio.h>

void my_strcpy(char *dest, const char *src){ 
    printf("Mem. direction source: %p\n", src);
    printf("Value source: %c\n",*src);

    *dest = *src; /*el valor del parametro src se guarda en la 
    dirección de memoria destino. */ 
    //*dest = "\0"; --- terminar con \0 por si es una cadena de caracteres

    printf("Mem. direction destination: %p\n",dest);

}

void my_strcpy2(char *dest, const char *src) {
    // Itera sobre cada carácter de la cadena de origen 'src'.
    while (*src != '\0') {
        // Copia el carácter de 'src' a 'dest'.
        *dest = *src;
        // Avanza ambos punteros para continuar la copia.
        dest++;
        src++;
    }
    // Agrega el carácter nulo '\0' al final de la cadena de destino.
    *dest = '\0';
}

int main(){
    printf("Hello World!\n");
    char character[10];
    my_strcpy(character,"A");
    printf("destination value: %s\n",character);
    printf("character mem. direction: %p\n",&character);
    return 0;
}