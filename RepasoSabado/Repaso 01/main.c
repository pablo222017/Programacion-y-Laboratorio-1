#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
/*
REALIZAR EL CODIGO QUE PERMITA EL INGRESO DE 4 IMPORTES
CADA IMPORTE SE DISTINGUIRA CON UN TIPO DE MONEDA DIFERENTE
(PESO,DOLAR,LIRA,EURO)
INFORMAR EL PROMEDIO DE LOS IMPORTES DE CADA TIPO DE MONEDA
EL MAYOR IMPORTE INGRESADO EN DOLARES
EL PROMEDIO DE POSITIVOS
*/
int main()
{
    char moneda;
    int importe,contador=0,contPeso,contDolar,contLira=0,contEuro=0;
    int mayImpDolar,acumDolar=0,acumPeso=0,acumEuro=0,acumLira=0;
    float promDolar,promPeso,promLira,promEuro;
    do{
		contador++;
		printf("\nIngrese el importe: ");
		scanf("%d",&importe);
        /*while(importe==isNaN(importe))
            {
                printf("\nIngreso invalidor, porfavor, ingrese un importe: ");
            }*/
		printf("\nIngrese el tipo de moneda indicando con (p/d/e/l): ");
        fflush(stdin);
        moneda=getche();
        while(moneda!='p' && moneda!='d' && moneda!='l' && moneda!='e')
            {
                printf("\nIngreso invalidor, porfavor, ingrese tipo de moneda indicando con (p/d/e/l): ");
                fflush(stdin);
                moneda=getchar();
            }
      }
    while(contador<4);
    printf("\nEl importe ingresado es: %d , y el tipo de moneda es: %c.",importe,moneda);
    return 0;
}
