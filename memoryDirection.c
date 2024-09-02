#include <stdio.h>


int main(){
int entero  = 5;
printf("Entero direccion memoria: %p\n", &entero); /*Accede mediante el puntero "%p" la 
                         dirección de memoria donde se guarda el valor 5. En este caso me guardó
                         en la dirección 0061FF1C (puede variar) */ 

// Declaracion de punteros a partir de una variable (en este caso double)
double numeroFlotante = 2.1;
double *Puntero_numeroFlotante = &numeroFlotante;
 printf("Numero flotante direccion memoria: %p\n",Puntero_numeroFlotante); 
 printf("Numero flotante valor: %.1f\n",*Puntero_numeroFlotante); // des-referenciando puntero



}