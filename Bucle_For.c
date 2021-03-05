#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i=0;

    float numeros[15];

    printf("---------Aprendiendo Arreglos y el Ciclo For con el Pana Orlando Batiz---------\n\n");
        //Inicia Variable; Condicion del For; Cambios por cada iteración
    //Escritura del Arreglo
    for (i = 0; i < 15; i++)
    {
        printf("Porfavor escriba un numero con decimal: ");
        scanf("%f",&numeros[i]);
    }
    printf("\tFinalizo Escritura en el Arreglo\n\n");

    printf("Leyendo el Arreglo:\n");
    // Lectura del Arreglo
    for(i=0; i<15; i++){
        printf("Posicion %d: %.2f\n",i,numeros[i]);
    }


    return 0;
}