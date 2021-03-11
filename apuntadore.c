#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia=0;
    int mes=0;
    int anio=0;

    int *apFecha;
    

    printf("Ingrese el dia: ");
    scanf("%d",&dia);
    printf("Ingrese el mes: ");
    scanf("%d",&mes);
    printf("Ingrese el anio: ");
    scanf("%d",&anio);

    printf("La fecha de hoy es: %d / %d / %d\n\n",dia,mes,anio);

    printf("Perdi la informacion, porfavor ingrese de nuevo los datos:\n\n");

    apFecha = &dia;
    printf("Ingrese el dia: ");
    scanf("%d",apFecha);

    apFecha = &mes;
    printf("Ingrese el mes: ");
    scanf("%d",apFecha);

    apFecha = &anio;
    printf("Ingrese el anio: ");
    scanf("%d",apFecha);

    printf("La fecha de hoy es: %d / %d / %d\n\n",dia,mes,*apFecha);

    return 0;
}