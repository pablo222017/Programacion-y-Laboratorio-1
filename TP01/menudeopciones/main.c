#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char menu();

int main()
{
    char seguir = 's';

    do{


    switch(menu()){

     case 'a':
         printf("\nUsted eligio sumar\n");
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



    }while(seguir == 'n');



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
     opcion = getche();

     return(opcion);

}
