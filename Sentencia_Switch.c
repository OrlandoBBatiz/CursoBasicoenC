#include <stdio.h>
#include <stdlib.h>

int main (){

    int opc =0;
    int opc2 =0;

    printf("--------------BIENVENIDO A AEROLINE ORLANDO BATIZ PANAS Copyrigth--------------\n\n");
    printf("Elija un Destino:\n");
    printf("1.-Chetumal\n");
    printf("2.-Los Cabos\n");
    printf("3.-Merida\n");
    printf("4.-Guadalajara\n");
    printf("5.-Salir del Menu\n");
    scanf("%d",&opc);

    

    switch (opc)
    {
    case 1:
        printf("\n\nSu opción fue: Chetumal\n\n");

        printf("Elija tipo de Vuelo:\n");
        printf("1.-VIP\t$1000\n");
        printf("2.-Comercial\t$500\n");
        printf("3.-Turista\t$250\n");
        scanf("%d",&opc2);

        //printf("\n\nSu destino es CHETUMAL\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("Su opcion fue Vuelo tipo VIP\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 2:
            printf("Su opcion fue Vuelo tipo Comercial\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 3:
            printf("Su opcion fue Vuelo tipo Turista\n");
            printf("DISFRUTE SU VUELO");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }

        break;
    case 2:
        printf("\n\nSu opción fue: Los Cabos\n\n");

        printf("Elija tipo de Vuelo:\n");
        printf("1.-VIP\t$1000\n");
        printf("2.-Comercial\t$500\n");
        printf("3.-Turista\t$250\n");
        scanf("%d",&opc2);

        //printf("\n\nSu destino es CHETUMAL\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("Su opcion fue Vuelo tipo VIP\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 2:
            printf("Su opcion fue Vuelo tipo Comercial\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 3:
            printf("Su opcion fue Vuelo tipo Turista\n");
            printf("DISFRUTE SU VUELO");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }

        break; 
    case 3:
        printf("\n\nSu opción fue: Merida\n\n");

        printf("Elija tipo de Vuelo:\n");
        printf("1.-VIP\t$1000\n");
        printf("2.-Comercial\t$500\n");
        printf("3.-Turista\t$250\n");
        scanf("%d",&opc2);

        //printf("\n\nSu destino es CHETUMAL\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("Su opcion fue Vuelo tipo VIP\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 2:
            printf("Su opcion fue Vuelo tipo Comercial\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 3:
            printf("Su opcion fue Vuelo tipo Turista\n");
            printf("DISFRUTE SU VUELO");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }
        break; 
    case 4:
        printf("\n\nSu opción fue: Guadalajara\n\n");

        printf("Elija tipo de Vuelo:\n");
        printf("1.-VIP\t$1000\n");
        printf("2.-Comercial\t$500\n");
        printf("3.-Turista\t$250\n");
        scanf("%d",&opc2);

        //printf("\n\nSu destino es CHETUMAL\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("Su opcion fue Vuelo tipo VIP\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 2:
            printf("Su opcion fue Vuelo tipo Comercial\n");
            printf("DISFRUTE SU VUELO");
            break;
        case 3:
            printf("Su opcion fue Vuelo tipo Turista\n");
            printf("DISFRUTE SU VUELO");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }
        break; 
    case 5:
        printf("Saliendo ... \n\n");
        printf("Gracias por consultar con AEROLINE ORLANDO BATIZ PANAS Copyrigth");
        break; 
    default:
        printf("OPCION INVALIDA... :C \n");
        break;
    }

    return 0;
}