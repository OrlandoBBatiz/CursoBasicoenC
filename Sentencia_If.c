#include <stdio.h>
#include <stdlib.h>

//Condicionales
//AND (SentenciaA  &&  SentenciaB) Es un condición donde ambos lados se deben de cumplir para darte un True
//OR (SentenciaA || SentenciaB) Es un condición donde con solo uno de los dos lados se cumpla, te da un True

//Mayor que (SentenciaA > SentenciaB) Es un condición donde prevalece lo numerico.
//Mayor o igual que (SentenciaA >= SentenciaB) Es un condición donde prevalece lo numerico.
//Menor que (SentenciaA < SentenciaB) Es un condición donde prevalece lo numerico.
//Menor o igual que (SentenciaA <= SentenciaB) Es un condición donde prevalece lo numerico.
//Igual que (SentenciaA == SentenciaB) Es un condición donde prevalece lo numerico.
//Mayor que (SentenciaA != SentenciaB) Es un condición donde prevalece lo numerico.

int main(){

    int edad=0;
    char nombre_de_mi_pana[30];

    printf("----------------SOY EL CADENERO ORLANDO BATIZ----------------\n\n");

    printf("Que edad tienes mi pana?: ");
    scanf("%d",&edad);

    if (edad >= 18)
    {
        printf("Dame tu nombre mi pana por favor:");
        scanf("%s",nombre_de_mi_pana);

    }
    else
    {
        printf("Pana usted es mas crack, porque desde pequeño esta aprendiendo...");
    }
    
    
}