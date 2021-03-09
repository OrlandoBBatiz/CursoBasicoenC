#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=0;
    char nombre_de_Empresa[40];

    printf("Ingresa el nombre de tu empresa pana: ");
    fflush(stdin);
    fgets(nombre_de_Empresa,sizeof(nombre_de_Empresa),stdin);

    printf("Empresa: %s\n\n",nombre_de_Empresa);

    printf("Impresion con un while\n");
    //i=0
    while (nombre_de_Empresa[i] != '\0')
    {
        printf("%c\n",nombre_de_Empresa[i]);
        i++;
    }
    

}