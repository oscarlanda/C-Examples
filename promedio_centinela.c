/*----------------------------------------------------------------------
    promedio_centinela.c
    11-08-2019
    Descripción:
        Programa que Calcula e Imprime el promedio de varios numeros
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 4, Ejercicio 4.10
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int   n_contador = 0;
    float   n_suma = 0;
    float   n_numcapturado = 0;
    float   n_promedio = 0;

    printf("Capture un numero Entero (Para Calcular el Promedio y Terminar Programa Ingrese 9999): ");
    scanf("%f", &n_numcapturado);

    while((int) n_numcapturado != 9999){
        n_suma += n_numcapturado ;
        n_contador += 1;
        printf("Capture un numero Entero (Para Calcular el Promedio y Terminar Programa Ingrese 9999): ");
        scanf("%f", &n_numcapturado);
    }

    if(n_contador > 0)
    {
        n_promedio =  n_suma / n_contador;
        printf("El Promedio es: %.2f", n_promedio);
    }

    return 0;
}
