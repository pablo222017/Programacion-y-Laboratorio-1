#include <stdio.h>
void menu()
{
        printf("\n         ************************************************************");
		printf("\n         *               :: C A L C U L A D O R A ::                *");
		printf("\n         ************************************************************");
		printf("\n         *                                                          *");
		printf("\n         *    1.- Suma                      4.- Division            *");
		printf("\n         *                                                          *");
		printf("\n         *    2.- Resta                     5.- Factorial           *");
		printf("\n         *                                                          *");
		printf("\n         *    3.- Multiplicacion            6.- Salir               *");
		printf("\n         *                                                          *");
		printf("\n         ************************************************************");
		printf("\n                     Nota: No es posible dividir por cero");
		printf("\n");
}
float sumar(float a,float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}
float restar(float a,float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}
float multiplicar(float a,float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}
float dividir(float a,float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}
