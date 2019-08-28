#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
PEDIR CALIFICAIONES MIENTRAS EL USUARIO QUIERA E INFORMAR:
NOMBRE Y SEXO DE LA PERSONA CON LA CALIFICACION MAS ALTA Y MAS BAJA
PROMEDIO DE NOTAS TOTALES
PROMEDIO DE NOTAS FEMENINAS
*/
int main()
{
    //INICIALIZO MIS VARIABLES
    int nota,contador=0,contF=0,acumNotas=0;
    char respuesta,sexo,sexNotaMax,sexNotaMin,nombre[20],nomNotaMax[20],nomNotaMin[20];
    float promTotal=0,promNotaMujer=0;
    do
        {
            printf("\nIngrese nombre del alumno: ");
            fflush(stdin);
            gets(nombre);
            printf("\nIngrese calificacion del alumno: ");
            scanf("%d",&nota);
            while(nota<0||nota>10)
                {
                     printf("\nlas calificaciones deben oscilar entre 0 y 10, porfavor, ingresela nuevamente: ");
                     scanf("%d",&nota);
                }
            acumNotas+=notas;
            printf("\nIngrese sexo del alumno: ");
            fflush(stdin);
            scanf("%c",&sexo);
            while(sexo!='f'&&sexo!='m')
                {
                     printf("\nel sexo debe ser ingresado con f o m unicamente, porfavor, ingreselo nuevamente: ");
                     fflush(stdin);
                     scanf("%c",&sexo);
                }
            contador++;
            printf("\nDesea continuar? -s/n: ");
            fflush(stdin);
            scanf("%c",&respuesta);
        }
    while(respuesta=='s');
    //printf("\nEl alumno es %s , su nota es %d , y su sexo es %c.",nombre,nota,sexo);
    return 0;
}
