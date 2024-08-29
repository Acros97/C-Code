/*
2024. Made by Daniel Fros. MIT Licence.
*/ 


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int _choose = 0;
    bool flag = true;
    while (flag) {
    float value1 = 0;
    float value2 = 0;
    float resultado = 0;
    
    printf("Por favor, ingrese una operacion matematica[1-5]\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf("5.Raiz cuadrada\n");
    printf("6. Salir del programa...");
    
    scanf("%d",&_choose);
    switch (_choose){
    case 1:
        value1 = 0;
        value2 = 0;
        printf("Ingrese valor 1: \n");
        scanf("%f",&value1);
        printf("Ingrese valor 2: \n");
        scanf("%f",&value2);
        resultado = value1 + value2;
        break;

    case 2:
        value1 = 0;
        value2 = 0;
        printf("Ingrese valor 1: \n");
        scanf("%f",&value1);
        printf("Ingrese valor 2: \n");
        scanf("%f",&value2);
        resultado = value1 - value2;
        break;

    case 3:
        value1 = 0;
        value2 = 0;
        printf("Ingrese valor 1: \n");
        scanf("%f",&value1);
        printf("Ingrese valor 2: \n");
        scanf("%f",&value2);
        resultado = value1 * value2;
        break;

    case 4:
        value1 = 0;
        value2 = 0;
        printf("Ingrese valor 1: \n");
        scanf("%f",&value1);
        printf("Ingrese valor 2: \n");
        scanf("%f",&value2);
        resultado = value1 / value2;
        break;

    case 5:
        value1 = 0;
        value2 = 0;
        printf("Ingrese valor: \n");
        scanf("%f",&value1);
       resultado = sqrt(value1);
       break;



    case 6:
        flag = false;
        break;
    }  // end switch 
    printf("%.2f\n",resultado);
}// end while
    
 system("pause");   
return 0;
}