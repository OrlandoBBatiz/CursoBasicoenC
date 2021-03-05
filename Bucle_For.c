#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i=0;
        //Inicia Variable; Condicion del For; Cambios por cada iteración
    for (i = 10; i >= -3; i--)
    {
        printf("Valor: %d\n",i);
    }
    
    printf("Termine la ejecución del For\n");

    return 0;
}