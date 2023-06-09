#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre [50];
    int edad;
    float altura;
};

int main()
{
    
struct Persona personas[5];

   for(int i = 0; i < 5;i++)
    {
    printf("Nombre: %s\n",i + 1);
    scanf("%s", personas[i].nombre);
    printf("Edad: %d\n",i + 1);
    scanf("%d", &personas[i].edad);
    printf("Altura: %f\n",i + 1);
    scanf("%f", &personas[i].altura);
    printf("\n");
    }
    
    for(int i = 0; i < 5;i++)
    {
        printf("Datos de la persona%d.\n", i + 1);
        printf("Nombre: %s\n",personas[i].nombre);
        printf("Edad: %d\n",personas[i].edad);
        printf("Nombre: %.2f\n",personas[i].altura);
        printf("\n");
    }
    return 0;
}