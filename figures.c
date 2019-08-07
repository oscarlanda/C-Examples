/*----------------------------------------------------------------------
    figures.c
    06-08-2019
    Descripción:
        Programa que imprime un recuadro, un oval, una flecha y un diamante
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 2, Ejercicio 2.21
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include    <stdio.h>

void fn_cuadro(int);
void fn_ovalo(int);
void fn_flecha(int);
void fn_diamante(int);

int main()
{
    int n_line = 1;

    do{
        fn_cuadro(n_line);
        fn_ovalo(n_line);
        fn_flecha(n_line);
        fn_diamante(n_line);
        printf("\t\n");
        ++n_line;
    }while(n_line < 10);

    return 0;
}

void fn_cuadro(int n_line){
    if(n_line == 1)
        printf("\t  %9s  ","*********");
    if(n_line > 1 && n_line < 9)
        printf("\t  %9s  ","*       *");
    if(n_line == 9)
        printf("\t  %9s  ","*********");

    return;
}

void fn_ovalo(int n_line){
    if(n_line == 1)
        printf("\t  %9s  ","   ***   ");
    if(n_line == 2)
        printf("\t  %9s  "," *     * ");
    if(n_line > 2 && n_line < 8)
        printf("\t  %9s  ","*       *");
    if(n_line == 8)
         printf("\t  %9s  "," *     * ");
    if(n_line == 9)
         printf("\t  %9s  ","   ***   ");

    return;
}

void fn_flecha(int n_line){
    if(n_line == 1)
        printf("\t  %9s  ","    *    ");
    if(n_line == 2)
        printf("\t  %9s  ","   ***   ");
    if(n_line == 3)
        printf("\t  %9s  ","  *****  ");
    if(n_line > 3 && n_line <= 9)
        printf("\t  %9s  ","    *    ");

    return;
}

void fn_diamante(int n_line){
    if(n_line == 1 || n_line == 9)
        printf("\t  %9s  ","    *    ");
    if(n_line == 2 || n_line == 8)
        printf("\t  %9s  ","   * *   ");
    if(n_line == 3 || n_line == 7)
        printf("\t  %9s  ","  *   *  ");
    if(n_line == 4 || n_line == 6)
        printf("\t  %9s  "," *     * ");
    if(n_line == 5)
        printf("\t  %9s  ","*       *");

    return;
}
