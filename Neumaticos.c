#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int eleccion;


#define NUM_NEUMATICOS 4

void leerPresionNeumaticos(int* arregloPresiones) {
    int i;
    srand(time(NULL)); 

    for (i = 0; i < NUM_NEUMATICOS; i++) {
        arregloPresiones[i] = rand() % 50 + 20; 
    }
}
int main(int* arregloPresiones) {
    int salir;
    salir=0;
    int presionesNeumaticos[NUM_NEUMATICOS];
    int i;
    leerPresionNeumaticos(presionesNeumaticos);
    evaluar(presionesNeumaticos);
    while (salir==0) {
        printf("1. Lectura\n2. Analizar\n3.Imprimir\n");
        scanf("%d",&eleccion);
        if (eleccion==1)
        {
            printf("Lectura exitosa\n");
        }
        else if (eleccion==2)
        {
            if(arregloPresiones[i]>50)
            printf("Llanta %d con presion alta\n",i+1);
            else
            printf("Presion de llantas correcta\n");
        }
        else if (eleccion==3)
        {
             printf("Presiones de los neumáticos:\n");
    for (i = 0; i < NUM_NEUMATICOS; i++) 
        printf("Neumático %d: %d PSI\n", i + 1, presionesNeumaticos[i]);
    
        }
   printf("Teclea 0 = para volver al menu\n");
   scanf("%d",&salir);
}

    return 0;
}
