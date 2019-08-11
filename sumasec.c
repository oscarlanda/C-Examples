/*----------------------------------------------------------------------
    sumasec.c
    11-08-2019
    Descripción:
        Programa que suma una secuencia de numeros, el primer numero
        capturado indica la cantidad de numeros que deberan capturarse
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 4, Ejercicio 4.9
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int n_cantenteros = 0;
    int n_numentero = 0;
    int n_sumaenteros = 0;

    printf("Especifique cuantos numeros enteros, desea capturar: ");
    scanf("%d", &n_cantenteros);

    for(int n_iterador = 1; n_iterador <= n_cantenteros; ++n_iterador){
        printf("%d Capture un numero entero: ",n_iterador);
        scanf("%d",&n_numentero);
        n_sumaenteros += n_numentero;
        n_numentero = 0;
    }

    printf("La suma de los %d numero(s) es: %d",n_cantenteros, n_sumaenteros);

    return 0;
}
