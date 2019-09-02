#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
char menu(void){

     char opcion;

     system("cls");
     printf("a- Sumar\n");
     printf("b- Restar\n");
     printf("c- Multiplicar\n");
     printf("d- Dividir\n");
     printf("e- Salir\n");
     printf("Ingrese opcion: ");
     fflush(stdin);
     opcion = getchar();

    return opcion;
}
int sumar(int a,int b)
{
    int resultado;
    resultado=a+b;
    return resultado;
}
int restar(int a,int b)
{
    int resultado;
    resultado=a-b;
    return resultado;
}
int multiplicar(int a,int b)
{
    int resultado;
    resultado=a*b;
    return resultado;
}
int dividir(int a,int b)
{
    int resultado;
    resultado=a/b;
    return resultado;
}
