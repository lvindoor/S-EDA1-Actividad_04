#include <stdio.h>

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
