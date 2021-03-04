#include <stdio.h>
#include <stdlib.h>

int main (){

    int opc =0;
    int opc2 =0;

    printf("--------------BIENVENIDO A Mc Batiz - Salinas Copyrigth--------------\n\n");
    printf("Elija un Hamburguesa:\n");
    printf("1.-Hawaina\n");
    printf("2.-Doble\n");
    printf("3.-Sencilla\n");
    printf("4.-Tapa-Arterias\n");
    printf("5.-Salir del Menu\n");
    scanf("%d",&opc);

    

    switch (opc)
    {
    case 1:

        printf("Elija el tamaño de sus Papas Fritas:\n");
        printf("1.-Peques\t\t$10\n");
        printf("2.-Pa-Compartir\t$15\n");
        printf("3.-Pa-Panas\t$30\n");
        scanf("%d",&opc2);

        printf("\n\nSu orden es: \n");
        printf("-\tHamburguesa Hawaiana\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("-\tPapas Tamaño: Peques\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 2:
            printf("-\tPapas Tamaño: Pa-Compartir\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 3:
            printf("-\tPapas Tamaño: Pa-Panas\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz. LOS AMO PANAS");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }

        break;
    case 2:
        printf("Elija el tamaño de sus Papas Fritas:\n");
        printf("1.-Peques\t\t$10\n");
        printf("2.-Pa-Compartir\t$15\n");
        printf("3.-Pa-Panas\t$30\n");
        scanf("%d",&opc2);

        printf("\n\nSu orden es: \n");
        printf("-\tHamburguesa Doble\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("-\tPapas Tamaño: Peques\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 2:
            printf("-\tPapas Tamaño: Pa-Compartir\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 3:
            printf("-\tPapas Tamaño: Pa-Panas\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz. LOS AMO PANAS");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }

        break; 
    case 3:
        printf("Elija el tamaño de sus Papas Fritas:\n");
        printf("1.-Peques\t\t$10\n");
        printf("2.-Pa-Compartir\t$15\n");
        printf("3.-Pa-Panas\t$30\n");
        scanf("%d",&opc2);

        printf("\n\nSu orden es: \n");
        printf("-\tHamburguesa Sencilla\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("-\tPapas Tamaño: Peques\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 2:
            printf("-\tPapas Tamaño: Pa-Compartir\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 3:
            printf("-\tPapas Tamaño: Pa-Panas\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz. LOS AMO PANAS");
            break;
        default:
            printf("OPCION INVALIDA... :C \n");
            break;
        }
        break; 
    case 4:
        printf("Elija el tamaño de sus Papas Fritas:\n");
        printf("1.-Peques\t\t$10\n");
        printf("2.-Pa-Compartir\t$15\n");
        printf("3.-Pa-Panas\t$30\n");
        scanf("%d",&opc2);

        printf("\n\nSu orden es: \n");
        printf("-\tHamburguesa tapa-Arterias\n");
        //Menu 2
        switch (opc2)
        {
        case 1:
            printf("-\tPapas Tamaño: Peques\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 2:
            printf("-\tPapas Tamaño: Pa-Compartir\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz");
            break;
        case 3:
            printf("-\tPapas Tamaño: Pa-Panas\n");
            printf("DISFRUTE SU ORDEN, le atendio el Pana Orlando Batiz. LOS AMO PANAS");
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