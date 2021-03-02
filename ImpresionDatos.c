//Primera parte se incluyen las librerias tanto del sistema, como hecha por nosotros
#include <stdio.h>
#include <stdlib.h>

//La funcion Principal
int main (){

    int variable1 = 0;
    char miprimercaracter;

    printf("Usuario porfavor ingrese un numero: ");
    scanf("%d",&variable1);

    printf("Lo que ingresaste fue: %d\n",variable1);

    printf("Ingresa un caracter porfavor: ");
    fflush(stdin);
    scanf("%c",&miprimercaracter);

    printf("El caracter ingresado es: %d\n\n",miprimercaracter);

    system("PAUSE");

    return 0;
}