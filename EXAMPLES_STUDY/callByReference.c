#include<stdio.h>
#include<math.h>

int increment(int number){ // Llamada por valor
   number = number + 1;
}

int incrementCallByReference(int *number){ // Llamada por referencia
   (*number) = (*number) + 1;
}


int main(void)
{
 // función 'increment' llama la variable por valor, no hay cambios en el resultado
 int input = 3;
 printf("Value before call by value: %d\n",input);
 increment(input);
 printf("Value after call by value: %d\n",input);


 // función 'incrementCallByReference' llama la variable por referencia, afecta el resultado final
 incrementCallByReference(&input);
 printf("\nValue after call by reference: %d\n",input);

 return 0;

}
