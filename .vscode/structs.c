#include <stdio.h>
#include <stdlib.h>

struct alumnos
{
    char nombre[30];
    int edad;
    double nota;

};


int main() {
  struct alumnos alumno1;
  alumno1.edad = 22;
  alumno1.nota = 7.1;
  strcpy(alumno1.nombre,"Juan"); /* strcpy = "string copy" ->   se utiliza para copiar una 
  cadena de caracteres (string) desde una fuente (source) a un destino*/
  printf("Edad: %d\n",alumno1.edad);
  printf("Nombre: %s\n", alumno1.nombre);
  printf("Nota: %f\n",alumno1.nota);

  printf("%");
  system("pause");
  
    return 0;
}