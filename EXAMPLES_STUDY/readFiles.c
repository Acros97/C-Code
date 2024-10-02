#include <stdio.h>

int main(){
    char linea1 [255];
    char linea2 [255];
    char linea3 [255];
    FILE *Parchivo = fopen("C:\\Users\\usuario\\C-Code\\alumnos.txt","r");
    fgets(linea1, 255, Parchivo);    
    fgets(linea2, 255, Parchivo);   
    fgets(linea3, 255, Parchivo);

    printf("%s\n",linea1);  // lee cada linea del archivo
    printf("%s\n",linea2);  // lee cada linea del archivo
    printf("%s\n",linea3);  // lee cada linea del archivo

    fclose(Parchivo);

    return 0;
}