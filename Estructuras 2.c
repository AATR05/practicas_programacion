#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre [50];
    int edad;
    float altura;
};

int main()
{
    struct Persona persona1;
    
    strcpy(persona1.nombre, "Pedro");
    persona1.edad=20;
    persona1.altura=1.70;
    
    printf("Nombre: %s\n",persona1.nombre);
    printf("Edad: %d\n",persona1.edad);
    printf("Altura: %.2f\n",persona1.altura);
    
    return 0;
}