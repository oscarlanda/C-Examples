/*----------------------------------------------------------------------
    cubosycuadrados.c
    09-08-2019
    Descripción:
        Programa que calcula cuadrados y cubos de los numeros 1 - 10
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 2, Ejercicio 2.31
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include <stdio.h>
//#include <math.h>

int fn_getCuadrado(int);
int fn_getCubo(int);

int main(){

    int n_iterador = 1;

    printf("numero\t cuadrado\t cubo\n");

    while(n_iterador <= 10){
      printf("%-6d\t %-8d\t %-4d\n", n_iterador, fn_getCuadrado(n_iterador), fn_getCubo(n_iterador));
      ++n_iterador;
    }

    return 0;
}

int fn_getCuadrado(int n_numero)
{
    int n_cuadrado = 0;

    //-- Recommend pow in math.h standar library
    //-- n_cuadrado = pow(n_numero,2);
    n_cuadrado= n_numero * n_numero;

    return n_cuadrado;
}


int fn_getCubo(int n_numero)
{
    int n_cubo = 0;

    //-- Recommend pow in math.h standar library
    //-- n_cubo = pow(n_numero,3);
    n_cubo= n_numero * n_numero * n_numero;

    return n_cubo;
}

