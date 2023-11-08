#include <stdio.h>
#include <stdlib.h>

#define CADENA 50
#define TRUE 1

void menuPrincipal(){
    printf("Universidad Tecnologica de Panama\n");
    printf("Facultad de Ingenieria de Sistemas computacionales\n");
    printf("Herramientas de Programacion Aplicada I\n");
    printf("Proyecto N.1\n");
    printf("\nMenu\n");
    printf("1. Presentacion\n");
    printf("2. Municipio de Panama\n");
    printf("3. Salir\n");
    printf("Ingrese su opcion: ");
}


void presentacion() {
    printf("\nUNIVERSIDAD TECNOLOGICA DE PANAMA\n");
    printf("Facultad de Ingenieria de Sistemas Computacionales\n");
    printf("Herramientas de Programacion Aplicada I\n");
    printf("Proyecto N.1\n");
    printf("\nFUNCIONES - ARREGLOS\n");
    printf("Integrantes: Javier Moore, 8-1002-2381\n");
    printf("             Ricardo Villarreal 8-1016-1180\n");
    printf("             Juan Pablo Dominguez 8-1019-2326\n");
    printf("Profesora: Janitza de Justiniani\n");
    printf("Fecha: Miercoles 8 de Noviembre de 2023\n");
    printf("\n");
}


void Opcion2() {
    int cantidadDeRegistro; 
    
    printf("Ingrese la cantidad de registro que desea procesar: ");
    scanf("%d", &cantidadDeRegistro);
    while (TRUE){
    if (cantidadDeRegistro > 0) {
            printf("Cantidad no válida. Ingrese un valor entero y positivo: ");
            while (getchar() != '\n'); 
        } else {
            break;
        }
   }
    char tipoVehiculos[cantidadDeRegistro];
    char nombrePropietarios[cantidadDeRegistro][50];
    char numeroPlacas[cantidadDeRegistro][50];
    int totalPagados[cantidadDeRegistro];
    
    int cantidadComercial = 0;
    int cantidadTaxi = 0;
    int cantidadBuses = 0;
    int cantidadParticulares = 0;
    int total = 0;
    
    for(int k = 0; cantidadDeRegistro > k; k++) {
        char tipo;
        char nombre[50];
        char placa[50];
        int total;
        
        while(TRUE) {
            printf("tipo de vehiculo");
            scanf(" %c", &tipo);
            if (tipo != 'C'  && tipo != 'T'  && tipo != 'B'  && tipo != 'P') 
                printf("tipo de vehiculo invalido");
            else 
                break;
        }
        
        
        printf("nombre de propietario");
        scanf(" %s", &nombre);
        
        printf("numero de placa");
        scanf(" %s", &placa);
        
        while(TRUE) {
            printf("pago total");
            scanf("%i", &total);
            if(total < 0)
                printf("El pago no puede ser negativo");
            else
                break;
        }
    }
    system("cls");
    printf("NOMBRE DEL PROPIETARIO          TIPO        DESCRIPCIÓN       NÚMERO DE PLACA       CANTIDAD PAGADA\n");
    for(int k = 0; cantidadDeRegistro > k; k++) {
        char tipoVehiculos[cantidadDeRegistro];
    char nombrePropietarios[cantidadDeRegistro][50];
    char numeroPlacas[cantidadDeRegistro][50];
    int totalPagados[cantidadDeRegistro];
    }
}
int main() {
    int opcion;
    char TipoVehiculo[20];
    do {
        menuPrincipal(); 
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                presentacion();
                break;
            case 2:
                opcion2(); 
                break;
            case 3:
                
                break;
            default:
                printf("Opcion no valida. Por favor, ingresa un valor de 1 a 3.\n");
                break;
        }
        
        if (opcion != 3) {
            printf("\nClick para volver al Menu principal :)");
            getch(); 
        }
        
        system("cls"); 
    } while (opcion != 3);
}
