//Calculadora cientificas pedida por las panas para usar funciones en paso de parametro por valor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Definicion de Funciones
double calculaSuma(double op1, double op2);
double calculaResta(double op1, double op2);
double calculaMultiplicacion(double op1, double op2);
double calculaDivision(double op1, double op2);
double calculaRaizCuadrada(double op1);
double calculaPotencia(double base, double exponente);
double calculaLogBase10(double op1);


//Función Principal
int main(){

    int opc =0;
    double operando1 = 0;
    double operando2 = 0;
    double res = 0;

    do
    {   system("clear");
        printf("============= Calculadora Cientifica Orlando Batiz con los y las Panas =============\n\n");
        printf("Selecciona una operacion de nuestro calculadora:\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicacion\n");
        printf("4.- División\n");
        printf("5.- Raiz Cuadrada\n");
        printf("6.- Elevar un numero a cierta potencia\n");
        printf("7.- Obtener el logaritmo en base 10\n");
        printf("8.- Salir\n\n");
        printf("Digite su opcion: ");
        scanf("%d",&opc);

        system("clear");
        switch (opc)
        {
        case 1:
            printf("\n\n============ SUMA ============\n\n");
            printf("Ingrese primer operando: ");
            scanf("%lf",&operando1);
            printf("Ingrese segundo operando: ");
            scanf("%lf",&operando2);

            res = calculaSuma(operando1,operando2);

            printf("El Resultado es: %.5f\n",res);

            break;
        case 2:
            printf("\n\n============ RESTA ============\n\n");
            printf("Ingrese primer operando: ");
            scanf("%lf",&operando1);
            printf("Ingrese segundo operando: ");
            scanf("%lf",&operando2);

            res = calculaResta(operando1,operando2);

            printf("El Resultado es: %.5f\n",res);

            break;
        case 3:
            printf("\n\n============ MULTIPLICACION ============\n\n");
            printf("Ingrese primer operando: ");
            scanf("%lf",&operando1);
            printf("Ingrese segundo operando: ");
            scanf("%lf",&operando2);

            res = calculaMultiplicacion(operando1,operando2);

            printf("El Resultado es: %f\n",res);

            break;
        case 4:
            printf("\n\n============ DIVISION ============\n\n");
            printf("Ingrese primer operando: ");
            scanf("%lf",&operando1);
            printf("Ingrese segundo operando: ");
            scanf("%lf",&operando2);

            res = calculaDivision(operando1,operando2);

            printf("El Resultado es: %.5f\n",res);

            break;
        case 5:
            printf("\n\n============ RAIZ CUADRADA ============\n\n");
            printf("Ingrese numero a cual sacara raiz cuadrada: ");
            scanf("%lf",&operando1);

            res = calculaRaizCuadrada(operando1);

            printf("El Resultado es: %.5f\n",res);
            
            break;
        case 6:
            printf("\n\n============ POTENCIA ============\n\n");
            printf("Ingrese base a elevar: ");
            scanf("%lf",&operando1);
            printf("Ingrese potencia a elevar: ");
            scanf("%lf",&operando2);

            res = calculaPotencia(operando1,operando2);

            printf("El Resultado es: %.5f\n",res);

            break;            
        case 7:
            printf("\n\n============ LOGARITMO ============\n\n");
            printf("Ingrese numero al cual sacar logaritmo base 10: ");
            scanf("%lf",&operando1);

            res = calculaLogBase10(operando1);

            printf("El Resultado es: %.5f\n",res);
            
            break;
        case 8:
            printf("Saliendo...\n");
            break;
        default:
            printf("OPCION INVALIDA....\n");
            break;
        }

        system("PAUSE");

    } while (opc != 8);
    
}

//Descripción de Funciones, donde decimos que realiza cada funcion
double calculaSuma(double op1, double op2)
{
    double resultado=0;
    
    resultado = op1 + op2;

    return resultado;
};
double calculaResta(double op1, double op2)
{
    double resultado=0;
    
    resultado = op1-op2;

    return resultado;
};
double calculaMultiplicacion(double op1, double op2)
{
    double resultado=0;
    
    resultado = op1*op2;

    return resultado;
};
double calculaDivision(double op1, double op2)
{
    double resultado=0;
    
    resultado = op1/op2;

    return resultado;
};
double calculaRaizCuadrada(double op1)
{
    double resultado=0;
    
    resultado = sqrt(abs(op1));

    return resultado;
};
double calculaPotencia(double base, double exponente)
{
    double resultado=0;
    
    resultado = pow(base,exponente);

    return resultado;
};
double calculaLogBase10(double op1)
{
    double resultado=0;
    
    resultado = log10(op1);

    return resultado;
};