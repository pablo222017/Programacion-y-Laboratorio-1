#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
int main()
{
    int num1,num2,resultado;
    scanf("%d",&num1);
    scanf("%d",&num2);
    resultado=sumar(num1,num2);
    printf("El resultado es: %d",resultado);
    return 0;
}

