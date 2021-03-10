#include <stdio.h>
#include <stdlib.h>

union mensajes
{
    char miCaraceter;
    char mensaje_natural[20];
    int iterador;
};

struct persona
{
    char label;
    char nombre[20];
    int edad;
};

int main(){

    union mensajes mimensaje;
    struct persona miPana;
    
    
    printf("============= Ejemplos Basicos de Union =============\n\n");
    printf("Ingrese un caracter: ");
    scanf("%c",&mimensaje.miCaraceter);

    printf("Tu caracter es: %c\n\n",mimensaje.miCaraceter);

    printf("Ingrese un valor numerico: ");
    scanf("%d",&mimensaje.iterador);

    printf("Tu iteredor tiene: %d\n",mimensaje.iterador);
    printf("Tu caracter es: %c\n\n",mimensaje.miCaraceter);

    printf("Escribeme un mensaje: ");
    fflush(stdin);
    fgets(mimensaje.mensaje_natural,sizeof(mimensaje.mensaje_natural),stdin);

    printf("Tu mensaje natural es: %s\n",mimensaje.mensaje_natural);
    printf("Tu iteredor tiene: %d\n",mimensaje.iterador);
    printf("Tu caracter es: %c\n\n",mimensaje.miCaraceter);

    printf("============= Ejemplos Basicos de Struct =============\n\n");

    printf("Ingresa la Letra Capital de tu Nombre: ");
    scanf("%c",&miPana.label);

    printf("La Letra Capital es: %c\n\n",miPana.label);

    printf("Ingrese su edad Pana: ");
    scanf("%d",&miPana.edad);

    printf("Edad: %d\n",miPana.edad);
    printf("La Letra Capital es: %c\n\n",miPana.label);

    printf("Escriba su nombre pana: ");
    fflush(stdin);
    fgets(miPana.nombre,sizeof(miPana.nombre),stdin);

    printf("Su nombre es: %s\n",miPana.nombre);
    printf("Su edad: %d\n",miPana.edad);
    printf("La Letra Capital es: %c\n\n",miPana.label);
    
    return 0;
}