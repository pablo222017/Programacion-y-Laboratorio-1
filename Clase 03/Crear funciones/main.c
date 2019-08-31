#include <stdio.h>
#include <stdlib.h>

char menu();

int main()
{
    char seguir,opcion;
    printf("Bienvenido, para ingresar al programa escriba -s-: ");
    fflush(stdin);
    seguir=getchar();
    do{
        system("cls");
        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
        printf("\n         บ               :: C A L C U L A D O R A ::                 บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
		printf("\n         บ                                                           บ");
		printf("\n         บ       1.- Suma                     4.- Division           บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       2.- Resta                    5.- Potencia           บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ       3.- Multiplicacion           6.- Raiz Cuadrada      บ");
		printf("\n         บ                                                           บ");
		printf("\n         บ                        7.- Salir                          บ");
		printf("\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
		printf("\n                     Nota: Solo funciona con numeros enteros");
		printf("\n");
		printf("\n                              Elija una opcion: ");
        fflush(stdin);
        opcion = getchar();

        switch(opcion)
        {

     case '1':
         printf("\nUsted eligio suma\n");
         system("pause");
         break;

     case '2':
        printf("\nUsted eligio resta \n");
        system("pause");
        break;
     case '3':
        printf("\nUsted eligio multiplicacion\n");
        system("pause");
        break;
     case '4':
        printf("\nUsted eligio division\n");
        system("pause");
        break;
     case '5':
        printf("\nUsted eligio Potencia\n");
        system("pause");
        break;
        case '6':
        printf("\nUsted eligio Raiz Cuadrada\n");
        system("pause");
        break;
        case '7':
        printf("\nUsted eligio salir\n");
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


char menu(){

     char opcion;

     system("cls");
     printf("1- Sumar\n");
     printf("2- Restar\n");
     printf("3- Multiplicar\n");
     printf("4- Dividir\n");
     printf("5- Potencia\n");
     printf("6- Raiz Cuadrada\n");
     printf("7- Salir\n");
     printf("Ingrese opcion: ");
     opcion = getche();

}
