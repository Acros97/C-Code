#include <stdio.h>
/* May 3, 2024. Use gcc to compile it. */
int multiplicacion(int n1, int n2){
  return n1 * n2;
}

 

int main(){
 	 const int MAX = 16;
	 

	 for(int i = 0; i <= MAX;i++){	 
	    printf("%d\n",i); 
	 }
	printf("\nMultiplicacion:\n");

	int resultado = multiplicacion(3,3);

	printf("%d\n",resultado);
	
	printf("Expresiones:\n");
	
	//Operador ?		
	int y = (MAX > 19) ? 100 : 250;

	printf("%d\n",y);

	//Suma entre valores flotantes
	printf("Suma valores flotantes\n");
	/* valores numericos output:
	 * %.2f = valor con 2 decimales
	 * %.1f = valor con 1 decimal
	 * %d = salida de valores enteros
	 * %c = salida para caracteres (individualmente)
  	 * %s = salida para una secuencia de caracteres (string)
	 * %o = muestra el valor convertido en octal, por ejemplo el entero 100 se converte en 144 (valor en octal)
	 * %x o %X = muestra el valor convertido en Hexadecimal (%x en minusculas, %X en mayusculas).
	  */

	float suma = 3.4 + 2.1; // Resultado es 5.5
	printf("%.2f\n",suma);	

	printf("Cadena de caracteres\n");
	char greeting[] = "h e l l o !";

	for(int i = 0; i<= 11;i++){
	  printf("%c",greeting[i]);
	}

	printf("\n\nPrint valor en Hexadecimal:\n\n");
 	// 252 = Valor que se va a convertir en hexadecimal
	printf("%10x\n",252);// Output: fc
	printf("%010x\n", 252);// Output: 00000000fc
	printf("%#010x\n", 252); // Output: 0x000000fc
	printf("%10.8x\n", 252); // Output: 000000fc
 	printf("%#10.8x\n", 252); // Output: 0x000000fc

    return 0;		
 }
