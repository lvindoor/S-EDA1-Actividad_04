#include <stdio.h>

void capturarEnteros(){
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        printf("\tEntero [%li] : ", i+1);
        scanf("%i", &enteros[i]);
    }
    printf("\t+-------------------------------------+\n");
    printf("\t|         IMPRESION DE NUMEROS        |\n");
    printf("\t+-------------------------------------+\n\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("\t%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i]; // suma += enteros[i]
    }
    printf("\tSuma: %i\n", suma);
    printf("\tPromedio: %f\n\n", suma/5.0);
    getchar();
}

int main (){
    char op;

    do{
        printf("\t+-------------------------------------+\n");
        printf("\t|                 MENU                |\n");
        printf("\t+-------------------------------------+\n\n");
        printf("\t1-. Capturar enteros\n");
        printf("\t2-. Mostrar cadena n veces\n");
        printf("\t3-. Agregar personajes\n");
        printf("\t4-. Mostrar personajes\n");
        printf("\t0-. Salir\n");
        printf("\tDigita la opcion: ");
        scanf("%c",&op);
        getchar();

        switch (op)
        {
        case '1':
            printf("\t+-------------------------------------+\n");
            printf("\t|         CAPTURA ENTEROS             |\n");
            printf("\t+-------------------------------------+\n\n");
            capturarEnteros();
            break;
        case '2':
            
            break;
        case '3':
            
            break;
        case '4':
            
            break;
        default:
            break;
        }

        fflush(stdin);
    }while(op != '0');

    return 0;
}
