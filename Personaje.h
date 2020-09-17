#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>

struct Personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}Personajes[5];

unsigned int cont = 0;

void CapturaPersonajes(){
    if (cont < 5){
        printf("\t             PERSONAJE %i            \n\n", cont + 1);
        printf("\tNombre: ");
        scanf("%s", Personajes[cont].nombre);
        printf("\tTipo: ");
        scanf("%s", Personajes[cont].tipo);
        printf("\tFuerza: ");
        scanf("%f", &Personajes[cont].fuerza);
        printf("\tSalud: ");
        scanf("%i", &Personajes[cont].salud);
        printf("\n");
        getchar();
        cont++;
    }
    else{
        printf("\tEl arreglo de personajes esta lleno\n");
    }
}

void MostrarPersonajes(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("\t             PERSONAJE %li            \n\n", i+1);
        printf("\tNombre: %s\n", Personajes[i].nombre);
        printf("\tTipo: %s\n", Personajes[i].tipo);
        printf("\tFuerza: %f\n", Personajes[i].fuerza);
        printf("\tSalud: %i\n\n", Personajes[i].salud);
    }
    
}
#endif 
