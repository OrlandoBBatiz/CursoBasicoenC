#include <stdio.h>
#include <stdlib.h>

void calculaAhorro(int salario, float *ahorro);
void calculaAniosRetiro(int salario, int edad, float *ahorro, float *anioR);
void imprimirResultados(char *empresa, char *nombre_T, int *edad, int *salario, float *ahorro, float *anioR);

int main(){

    char empresa[30];
    char nombre_T[40];
    int edad = 0;
    int salario = 0;
    int opc = 0;
    float ahorro = 0;
    float anioR = 0;


    do{
        printf("====================== CAPTURADOR DE DATOS ======================\n\n");
        printf("Nombre de la Empresa: ");
        fflush(stdin);
        fgets(empresa,sizeof(empresa),stdin);
        printf("Nombre del Trabajado: ");
        fflush(stdin);
        fgets(nombre_T,sizeof(nombre_T),stdin);
        printf("Edad: ");
        scanf("%d",&edad);
        printf("Salario: ");
        scanf("%d",&salario);

        calculaAhorro(salario,&ahorro);
        calculaAniosRetiro(salario,edad,&ahorro,&anioR);
        imprimirResultados(empresa,nombre_T,&edad,&salario,&ahorro,&anioR);


        printf("Quieres ingresar otro Trabajador:\n\n");
        printf("1.- Si\n");
        printf("2.- No\n");
        scanf("%d",&opc);

    }while(opc != 2);
       
}

void calculaAhorro(int salario, float *ahorro)
{
    //Parametros en Funcion = Parametros mandados por la funcion donde fue llamado
    //int salario = salario;
    //float *ahorro = &salario;
    float dummyAhorro = 0;
    dummyAhorro = (float)salario * 0.1;
    *ahorro = dummyAhorro;
    //printf("Termine calculo de Ahorro\n");
};
void calculaAniosRetiro(int salario, int edad, float *ahorro, float *anioR)
{
    float suma = 1000000;
    float dummyAhorro = *ahorro;
    float dummyanioR =0;

    dummyAhorro = dummyAhorro*12;
    dummyanioR = suma / dummyAhorro;

    *anioR = edad + dummyanioR;
    //printf("Termine calculo de Anios\n");

};
void imprimirResultados(char *empresa, char *nombre_T, int *edad, int *salario, float *ahorro, float *anioR)
{
    printf("==================== RESULTADOS FINANCIEROS ====================\n\n");
    printf("Empresa en la que trabaja: %s\n", empresa);
    printf("Nombre del trabajador: %s\n", nombre_T);
    printf("Edad del trabajador: %d\n",*edad);
    printf("Salario es: $ %d\n",*salario);
    printf("Ahorro Mensual Calculado: $ %f\n",*ahorro);
    printf("Anios que tendra el Trabajador al Retirarse: %f\n",*anioR);
};