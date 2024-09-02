#include <stdio.h>

int main(){
    /*
    w -> write file
    r -> read file
    a -> attach file
    */ 
    FILE *Parchivo = fopen("C:\\Users\\usuario\\C-Code\\alumnos.txt","w"); // crear archivo .txt
    fprintf(Parchivo,"Nombre: Juan, Nota: 6.5\n");
    fprintf(Parchivo,"Nombre: Pedro, Nota: 5.3\n");
    fprintf(Parchivo,"Nombre: Daniel, Nota: 8.5\n");

    fclose(Parchivo);

    return 0;
}