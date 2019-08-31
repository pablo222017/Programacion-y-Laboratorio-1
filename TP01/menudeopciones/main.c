#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int sumar(int a,int b);
int restar(int a,int b);
int multiplicar(int a,int b);
int dividir(int a,int b);
char menu();

int main()
{
    int num1,num2,resultado;
    char seguir;
    do{

    switch(menu() )
    {
        case 'a':
        printf("\nIngrese primer numero: ");
        scanf("%d",&num1);
        printf("\nIngrese segundo numero: ");
        scanf("%d",&num2);
        resultado=sumar(num1,num2);
        printf("\nEl primer numero es: %d, el segundo es: %d, y el resultado de la suma es: %d\n",num1,num2,resultado);
        system("pause");
        break;

        case 'b':
        printf("\nUsted eligio restar \n");
        system("pause");
        break;

        case 'c':
        printf("\nUsted eligio multiplicar\n");
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

    }while(seguir == 's');



    return 0;
}


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
