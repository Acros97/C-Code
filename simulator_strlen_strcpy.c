#include <stdio.h>

void my_strcpy(char *dest, const char *src){ 
    printf("Mem. direction source: %p\n", src);
    printf("Value source: %c\n",*src);

    *dest = *src; /*el valor del parametro src se guarda en la 
    dirección de memoria destino. */ 
    //*dest = "\0"; --- terminar con \0 por si es una cadena de caracteres

    printf("Mem. direction destination: %p\n",dest);

}

void resolved_my_strcpy2(char *dest, const char *src) {
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

size_t my_strlen(const char *str){
    
    size_t char_size = 0;
    while(*str != '\0'){
        // gettin the mem. direction's value
        char value = *str;
        char_size++;
        str++;
    }

    return char_size;
}


int main(){
    printf("=================MY STRCPY=================\n");
    char character[10];
    my_strcpy(character,"A"); // one character, to more than one, change to 'resolved_my_strcpy2' function
    printf("destination value: %s\n",character); 
    printf("character mem. direction: %p\n",&character);

    printf("=================MY STRLEN=================\n");
    char character_len[20] = "Hello World!!";

    size_t length_parameter = my_strlen(character_len);
    printf("the length of your character is: %d\n", length_parameter);
    return 0;
}