/*----------------------------------------------------------------------
    pareimpar.c
    07-08-2019
    Descripción:
        Programa que pide un numero entero e indica si es par o impar
        ref. Como Programar en C y C++, Autor Deitel Deitel
        capitulo 2, Ejercicio 2.24
    Programador:
        Oscar Barrios Landa
    email:
        barrioslandaoscar@gmail.com
-----------------------------------------------------------------------*/

#include    <stdio.h>

//-- Macro definida para poder utilizar instrucción cls() de limpiar pantalla
#ifdef WIN32
    #define cls() system("cls")
#endif


int main()
{
    int n_numero = 0;
    int n_residuo = -1;
    char c_opcion;

    do
    {

        cls(); // windows

        printf("Digita un numero entero, para decirte si es par o impar: ");
        scanf("%d", &n_numero);

        if(n_numero <= 0){
            printf("El numero %d debe ser mayor que cero \n", n_numero);
        }
        else{
            n_residuo = n_numero % 2;

            if(n_residuo == 0)
                printf("El numero %d es un par \n", n_numero);
            else
                printf("El numero %d es un impar \n", n_numero);
        }

        /*Para hacer scanf con caracteres individuales, añadí un espacio en blanco
          antes del %c para saltear cualquier espacio en blanco y los saltos de línea.*/
        printf("Desea salir(s/n)?: ");
        scanf(" %c",&c_opcion);
        n_numero = 0;

    }while(c_opcion != 's');

    return 0;
}
