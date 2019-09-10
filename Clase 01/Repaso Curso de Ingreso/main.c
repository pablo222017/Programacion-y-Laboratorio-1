#include <stdio.h>
#include <stdlib.h>

/*Escribir  un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
3. Efectœe el producto de dichas variables
4. Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla*/


int main(int argc, char *argv[]) {

	int a;
	int b;
	int producto;
	int cuadrado;

	system("cls");

	do{
	printf("\nIngrese 1er numero: ");
	scanf("%d",&a);
	printf("______________________________________\n");
		if(a==0)
		{
            printf("\nIngrese numero mayor a 0\n");
            printf("______________________________________\n");
		}
    }while(a==0);

	do{
	printf("\nIngrese 2do numero: ");
	scanf("%d",&b);
	printf("______________________________________\n");
		if(b==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		printf("______________________________________\n");
		}
    }while(b==0);

	producto=a*b;
	cuadrado=a*a;

	printf("\nEl valor de a es: %d\nEl valor de b es: %d\n\nEl producto de ambos es: %d\n\nEl cuadrado del primer valor es: %d \n",a,b,producto,cuadrado);
	printf("______________________________________\n\n\n\n");



	return 0;
}
