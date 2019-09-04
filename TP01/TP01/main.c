#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Prototipos.h"

int main()
{
    float num1,num2,resultado;
    //int contOpcion=0;
    char opcion;
    printf("      ¡¡¡ Bienvenido a su calculadora !!! \n");
    printf("                                         \n");
    printf("Para comenzar, ingrese primero los operandos.\n");
    printf("\nIngrese primer numero: ");
    scanf("%f",&num1);
    printf("\nIngrese segundo numero: ");
    scanf("%f",&num2);
    system("cls");
    menu();
    while(opcion!='6')
        {
            printf("\nIngrese la opcion correspondiente a la operacion deseada: ");
            fflush(stdin);
            opcion=getchar();
            switch(opcion)
            {
            case '1':
            resultado=sumar(num1,num2);
            printf("\nEl resultado de %.2f + %.2f es: %.2f\n",num1,num2,resultado);
            //system("pause");
            break;
            case '2':
            resultado=restar(num1,num2);
            printf("\nEl resultado de %.2f - %.2f es: %.2f\n",num1,num2,resultado);
            //system("pause");
            break;
            case '3':
            resultado=multiplicar(num1,num2);
            printf("\nEl resultado de %.2f x %.2f es: %.2f\n",num1,num2,resultado);
            //system("pause");
            break;
            case '4':
            if(num1<1 || num2<0)
                {
                    printf("\nNo es posible realizar divisiones por 0, elija otro numero: ");
                    scanf("%f",&num1);
                    printf("\nNo es posible realizar divisiones por 0, elija otro numero: ");
                    scanf("%f",&num2);
                }
            resultado=dividir(num1,num2);
            printf("\nEl resultado de %.2f / %.2f es: %.2f\n",num1,num2,resultado);
            //system("pause");
            break;
            case '5':
            printf("\nUsted eligio salir\n");
            //system("pause");
            break;
            default:
            printf("\nUsted eligio salir\n");
            break;
            }
        }
    return 0;
}
