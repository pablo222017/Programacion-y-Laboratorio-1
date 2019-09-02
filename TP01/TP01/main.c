#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Prototipos.h"

int main()
{
    float num1,num2,resultado;
    char seguir,opcion;
    do
    {
        fflush(stdin);
        scanf("%c",&seguir);
        printf("\nIngrese primer numero: ");
        scanf("%f",&num1);
        printf("\nIngrese segundo numero: ");
        scanf("%f",&num2);
        menu();
        printf("\nElija una opcion: ");
        fflush(stdin);
        opcion=getchar();
        switch(opcion)
        {
        case '1':
        resultado=sumar(num1,num2);
        printf("\nEl resultado de %.2f + %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case '2':
        resultado=restar(num1,num2);
        printf("\nEl resultado de %.2f - %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case '3':
        resultado=multiplicar(num1,num2);
        printf("\nEl resultado de %.2f x %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case '4':
        if(num1<1)
            {
                printf("No es posible realizar divisiones por 0, elija otro numero");
                scanf("%f",&num1);
            }else if
            {

            }
        resultado=dividir(num1,num2);
        printf("\nEl resultado de %.2f / %.2f es: %.2f\n",num1,num2,resultado);
        break;

        case '5':
        printf("\nUsted eligio salir\n");
        system("pause");
        break;

        default:
        printf("\nOpcion invalida\n\n");
        system("pause");
        break;
        }
    }
    while(seguir=='s');
    return 0;
}
/*
do{
    menu();
    switch(menu())
    {
        case 'a':
        resultado=sumar(num1,num2);
        printf("\nEl resultado de %.2f + %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case 'b':
        resultado=restar(num1,num2);
        printf("\nEl resultado de %.2f - %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case 'c':
        resultado=multiplicar(num1,num2);
        printf("\nEl resultado de %.2f x %.2f es: %.2f\n",num1,num2,resultado);
        system("pause");
        break;

        case 'd':
        printf("\nUsted eligio dividir\n");
        system("pause");
        break;

        case 'e':
        printf("\nUsted eligio salir\n");
        seguir = 'n';
        system("pause");
        break;

        default:
        printf("\nOpcion invalida\n\n");
        system("pause");
        break;
        }
    printf("\nDesea continuar operando? (s/n) \n");
    seguir=getchar();
    }while(seguir == 's');



*/
