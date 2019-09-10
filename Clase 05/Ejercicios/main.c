#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexos[5],i;
    for(i=0;i<5;i++)
        {
            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c",&sexos[i]);
            while(sexos[i] != 'f' && sexos[i] != 'm')
            {
                printf("Error. Reingrese sexo");
                fflush(stdin);
                scanf("%c",&sexos[i]);
            }
        }
    printf("%c %c %c %c %c",sexos[0],sexos[1],sexos[2],sexos[3],sexos[4]);
    return 0;
}
