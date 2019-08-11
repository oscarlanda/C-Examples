/*----------------------------------------------------------------------
    factorial.c
    11-08-2019
    Descripción:
        Programa que calcula el Factorial de un Numero Capturado
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 4, Ejercicio 4.14
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include <stdio.h>

int fn_calculaFactorial(int, int);

int main(){
    int n_numero = 0;

    printf("Por favor Capture un Numero Entero para Calcular el Factorial: ");
    scanf("%d", &n_numero);

    fn_calculaFactorial(n_numero,0);

    return 0;
}

int fn_calculaFactorial(int n_numero,int n_factorial){

    if(n_factorial == 0)
        n_factorial = n_numero * (n_numero - 1);
    else
        n_factorial = n_factorial * (n_numero - 1);

    n_numero -= 1;

    if(n_numero != 1)
        fn_calculaFactorial(n_numero, n_factorial);
    else
        printf("El Factorial del Numero Capturado es: %d", n_factorial);

    return 0;
}
