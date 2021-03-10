#include <stdio.h>
#include <stdlib.h>

typedef struct persona
{
    char label;
    char nombre[20];
    int edad;
}human;

int main(){
    
    human misPanas[5];
    int iterador=0;

    while (iterador < 5)
    {
        printf("\n\nPana %d:\n\n",iterador);
        printf("Dame tu nombre Pana: ");
        fflush(stdin);
        fgets(misPanas[iterador].nombre,sizeof(misPanas[iterador].nombre), stdin);

        misPanas[iterador].label = misPanas[iterador].nombre[0]; //Entrando a un caracter especifico de una localidad especifica en mi arreglo de human

        printf("Dame tu edad Pana: ");
        scanf("%d",&misPanas[iterador].edad);
        printf("Iterador: %d\n",iterador);

        iterador++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nPana %d:\n\n",i+1);
        printf("Nombre: %s\n",misPanas[i].nombre);
        printf("Edad: %d\n",misPanas[i].edad);
        printf("Letra Capital: %c\n",misPanas[i].label);
    }
    
    
    
    
    return 0;
}