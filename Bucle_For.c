#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i=0;

    int numeros[15];
    char nombre[20];

    printf("---------Aprendiendo Arreglos y el Ciclo For con el Pana Orlando Batiz---------\n\n");
        //Inicia Variable; Condicion del For; Cambios por cada iteración

    printf("Introduce tu nombre pana, porfavor: ");
    fgets(nombre,sizeof(nombre),stdin);
    //Escritura del Arreglo
    for (i = 0; i < 15; i++)
    {
        printf("Porfavor escriba un numero con decimal: ");
        scanf("%d",&numeros[i]);
    }
    printf("\tFinalizo Escritura en el Arreglo\n\n");

    printf("Leyendo el Arreglo:\n");
    // Lectura del Arreglo
    for(i=0; i<15; i++){
        printf("Posicion %d: %d\n",i,numeros[i]);
        
        if( (numeros[i]%2) == 0 ) //Operacion modulo 2, que solo retorna 0 si es par, o 1 si es impar
        {
            printf("Es par el numero\n");
        }
        else
        {
            printf("Es impar el numero\n");
        }
        
    }

    printf("Leyendo mi arreglo de Caracteres\n");

    for(i=0; i<sizeof(nombre) ;i++){
        printf("Letra %d: %c\n",i,nombre[i]);

    }


    return 0;
}