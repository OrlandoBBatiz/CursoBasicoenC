#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int ruletaBatiz[5];
    char ruletaBatizC[5];
    

    int *apRuleta;
    char *apRuletaC;
    int j=0;

    apRuleta = ruletaBatiz;
    apRuletaC = ruletaBatizC;

    for(int i = 0; i<5; i++)
    {   
        *(apRuleta + i) = rand()%2000;
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Numero guardado en %d: %d\n",i+1,*(apRuleta + i));
    }

    j=0;
    while(j<6)
    {
        printf("Ingrese el caracter %d: ",j+1);
        fflush(stdin);
        scanf("%c",(apRuletaC + j));
        j++;
    }
    
    j=0;
    while(j<6)
    {
        printf("Caracter en %d: %c\n",j+1,*(apRuletaC + j)); 
        j++;
    }

    return 0;
}