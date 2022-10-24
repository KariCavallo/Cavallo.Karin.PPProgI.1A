#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

float aplicarDescuento(float precio);


int contarCaracteres(char cadena[], char caracter);


typedef struct
{

    int id;
    char procesador[20];
    char marca;
    float precio;
} eNotebook;

int ordenarArray(eNotebook vec[],int tam);

int main()
{


    /*char nombre [20] = "juan" ;

    int cant;

    cant = contarCaracteres(nombre,'a');

    printf("%d",cant);*/

    eNotebook arrayDeNotebook[TAM] =
    {
        {1, "sarlanga", 'a', 170},
        {2, "Pepe", 'd', 190},
        {3, "pirulo", 'a', 199}
    };

    ordenarArray(arrayDeNotebook,TAM);

    for(int i = 0; i < TAM; i++)
    {

        printf("%d %s %c %2.f \n",arrayDeNotebook[i].id,arrayDeNotebook[i].procesador,arrayDeNotebook[i].marca,arrayDeNotebook[i].precio);
    }

    return 0;
}
float aplicarDescuento(float precio)
{

    float descuento = 0;

    descuento = (precio * 0.95);

    return descuento;
}

int contarCaracteres(char cadena[], char caracter)
{

    int contador = 0;
    int cantidad = strlen(cadena);


    for(int i = 0; i < cantidad ; i++ )
    {

        if(cadena[i] == caracter)
        {
            contador++;

        }

    }


    return contador;

}

int ordenarArray(eNotebook vec[],int tam)
{

    int todoOk = 0;
    eNotebook aux;

    if (vec != NULL && tam > 0)
    {


        for( int i = 0; i < tam -1; i++)
        {

            for( int j = i+1; j < tam ; j++)
            {

                if(
                    (vec[i].marca > vec[j].marca )||
                    ((vec[i].marca == vec[j].marca)  &&
                     (vec[i].precio  > vec[j].precio)))

                {


                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;


                }

            }

        }
        todoOk = 1;
    }





    return todoOk;
}

