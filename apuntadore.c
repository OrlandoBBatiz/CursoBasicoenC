#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia=0;
    int mes=0;
    int anio=0;

    int *apDia;
    apDia = &dia;

    printf("Dame el dia: ");
    scanf("%d",apDia);

    printf("El dias es: %d, guardado en: %X o %p",*apDia,apDia,apDia);

    return 0;
}