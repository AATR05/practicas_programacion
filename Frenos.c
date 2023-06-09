#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int opcion;
#define MAX_SENSORES 5

 

void readPresion(int * arregloPresiones)
    {
    int i;
    srand(time(NULL));
        for(i=0;i<MAX_SENSORES;i++)
             arregloPresiones[i]=rand() % 50 + 20;
    printf("Lectura terminada exitosamente\n");
    }
int main()
{
    int presion_frenos[MAX_SENSORES];
    int i;
    readPresion(presion_frenos);
    int reset;
    while(reset==0)
    {
        printf("OPCION 1: Imprimir\nOPCION 2: ANALIZAR\nOPCION 3: Salir\n");
        scanf("%d",&opcion);
        if(opcion==1)
            {
                printf("Presion de Frenos :\n");
            for(i=0;i<MAX_SENSORES;i++)
                if(presion_frenos[i]<999)
                printf("Frenos ID %d: %d PSI\n",i+1,presion_frenos[i]);
                else
                printf("Frenos ID %d:%d PSI: PRESION ALTA\n",i+1,presion_frenos[i]-1000);
            }
        else if(opcion==2)
            {
               for(i=0;i<MAX_SENSORES;i++)
                    {
                        if(presion_frenos[i]>60)
                        {
                            presion_frenos[i]=presion_frenos[i]+1000;
                        }
                    }
            }
        else if(opcion==3)
            {
        printf("Presiona 0 para salir:");
        scanf("%d",&reset);
            }
        else    
        printf("Fin del programa");
    }
    return 0;

 


}