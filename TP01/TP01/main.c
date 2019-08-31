#include <stdio.h>
#include <stdlib.h>
int sumar(int a,int b);
int restar(int a,int b);
int multiplicar(int a,int b);
int dividir(int a,int b);
int main()
{
    do
        {
            system("cls");
            printf("----Menu de Opciones----\n\n");
            printf("a- Sumar\n");
            printf("b- Restar\n");
            printf("c- Multiplicar\n");
            printf("d- Dividir\n");
            printf("e- Salir\n");
            printf();

            switch (opcion)
            {
            case 'a':


            }
        }
    while(respuesta=='s');
    return 0;
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
