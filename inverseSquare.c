/*
El algoritmo de raíz cuadrada inversa rápida manipula los bits de un
 número flotante para obtener una aproximación inicial de la raíz cuadrada inversa.
  Durante el proceso, un valor flotante es convertido en un entero para realizar
 operaciones a nivel de bits, y luego se convierte de nuevo en un valor flotante.

Comparación de Resultados
Método Tradicional: Ofrece el valor exacto de la raíz cuadrada inversa, que es 0.408248.

Algoritmo Rápido: Proporciona una aproximación de 0.407681. Aunque es bastante cercana, no es exacta debido a la naturaleza de las aproximaciones y la manipulación de bits.
Significado de la Diferencia

Precisión vs. Velocidad: El algoritmo de raíz cuadrada inversa rápida está diseñado para ser rápido y eficiente, sacrificando algo de precisión para lograr tiempos de cálculo más cortos. La diferencia de aproximadamente 0.000567 entre los dos métodos es una medida de cuán precisa es la aproximación en comparación con el cálculo exacto.

Uso en Aplicaciones: En muchas aplicaciones, especialmente en gráficos en tiempo real donde el rendimiento es crítico, una pequeña pérdida de precisión puede ser aceptable para ganar en velocidad de procesamiento.

*/

/*
  Q_rsqrt() and all functions related in this file has been extracted from Id Software source code. All right reserved to Id Software. 
*/

#include <stdio.h>
#include <math.h>

float ExecSqrt(float number){
    float result = sqrt(number);
    return result;
}


float Q_rsqrt(float number){
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    float sqrtCommon = 

    x2 = number * 0.5F;
    y =  number;
    i =  *(long*)&y;
    i =  0x5f3759df  - (i >> 1);
    y = *(float*)&i;
    y = y * ( threehalfs - ( x2 * y * y ) );
    
    return y;
}


int main(){
   /*printf("Algoritmo raiz cuadrada inversa:\n");
   float y = Q_rsqrt(6);
   printf("%f\n", y);*/
   
   printf("\n");
   float raiz_cuadrada = ExecSqrt(6);
   float inversa = 1 / raiz_cuadrada;

   printf("Raiz cuadrada de 6: %.2f\n", raiz_cuadrada);
   printf("Raiz cuadrada inversa de 6: %f\n", inversa);
   float Fast_inverse_square_root = Q_rsqrt(6);
   printf("Algorimo de la raíz cuadrada inversa rápida de 6: %f\n", Fast_inverse_square_root);
   system("pause"); // detiene la ejecución para visualizarlo desde el ejecutable.

   return 0;

}