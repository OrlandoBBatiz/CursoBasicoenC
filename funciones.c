#include <stdio.h>
#include <stdlib.h>

typedef struct Trabajador{

    char empresa[30];
    char nombre_T[40];
    int edad;
    int salario;
    float ahorro;
    float anioR;

}Trabajador;

void capturarDatos(Trabajador *empleado);
void calculaAhorro(Trabajador *empleado);
void calculaAniosRetiro(Trabajador *empleado);
void imprimirResultados(Trabajador *empleado);

int main(){

    Trabajador empleado;
    int opc=0;

    do{
        
        capturarDatos(&empleado);
        calculaAhorro(&empleado);
        calculaAniosRetiro(&empleado);
        imprimirResultados(&empleado);


        printf("Quieres ingresar otro Trabajador:\n\n");
        printf("1.- Si\n");
        printf("2.- No\n");
        scanf("%d",&opc);

    }while(opc != 2);
       
}
void capturarDatos(Trabajador *empleado)
{
    printf("====================== CAPTURADOR DE DATOS ======================\n\n");
    printf("Nombre de la Empresa: ");
    fflush(stdin);
    fgets(empleado->empresa,sizeof(empleado->empresa),stdin);
    printf("Nombre del Trabajado: ");
    fflush(stdin);
    fgets(empleado->nombre_T,sizeof(empleado->nombre_T),stdin);
    printf("Edad: ");
    scanf("%d",&empleado->edad);
    printf("Salario: ");
    scanf("%d",&empleado->salario);
};

void calculaAhorro(Trabajador *empleado)
{
    //Parametros en Funcion = Parametros mandados por la funcion donde fue llamado
    //int salario = salario;
    //float *ahorro = &salario;
    float dummyAhorro = 0;
    dummyAhorro = (float)empleado->salario * 0.1;
    empleado->ahorro = dummyAhorro;
    //printf("Ahorro %f\n",empleado->ahorro);
    //printf("Termine calculo de Ahorro\n");
};
void calculaAniosRetiro(Trabajador *empleado)
{
    float suma = 1000000;
    float dummyAhorro = empleado->ahorro;
    float dummyanioR =0;

    dummyAhorro = dummyAhorro*12;
    dummyanioR = suma / dummyAhorro;

    empleado->anioR = empleado->edad + dummyanioR;
    //printf("Termine calculo de Anios\n");

};
void imprimirResultados(Trabajador *empleado)
{
    printf("==================== RESULTADOS FINANCIEROS ====================\n\n");
    printf("Empresa en la que trabaja: %s\n", empleado->empresa);
    printf("Nombre del trabajador: %s\n", empleado->nombre_T);
    printf("Edad del trabajador: %d\n",empleado->edad);
    printf("Salario es: $ %d\n",empleado->salario);
    printf("Ahorro Mensual Calculado: $ %f\n",empleado->ahorro);
    printf("Anios que tendra el Trabajador al Retirarse: %f\n",empleado->anioR);
};