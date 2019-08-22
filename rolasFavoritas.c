#include <stdio.h>
#include <string.h>

#define SIZE    3

typedef struct{
    char str_songname[30];
    char str_artistname[30];
    int n_launchyear;
} song;

void set_printsongs(char *,song[]);
int getn_ordenburbuja(song[]);

int main(){
    int n_iterador = 0;
    song arr_favoritas[SIZE];

    printf("Registre Tres de sus Canciones Favoritas\n\n");

    while(n_iterador < SIZE)
    {
      strcpy(arr_favoritas[n_iterador].str_songname," ");
      strcpy(arr_favoritas[n_iterador].str_artistname," ");
      arr_favoritas[n_iterador].n_launchyear = 0;

      printf("Cancion: ");
      gets(arr_favoritas[n_iterador].str_songname);

      printf("Artista: ");
      gets(arr_favoritas[n_iterador].str_artistname);

      printf("Anio: ");
      scanf("%d",&arr_favoritas[n_iterador].n_launchyear);
      printf("\n");
      fflush(stdin);

      n_iterador++;
    }

    set_printsongs("\nImprimiendo en Captura por Defecto\n", arr_favoritas);
    getn_ordenburbuja(arr_favoritas);
    set_printsongs("\nImprimiendo Ordenado por Anio Ascendente\n",arr_favoritas);

    return 0;
}

int getn_ordenburbuja(song arr_elementos[])
{
    song stt_aux;

    for(int i = 1; i <= SIZE; i++)
        for(int j = 0; j < SIZE - i; j++)
            if(arr_elementos[j].n_launchyear > arr_elementos[j + 1].n_launchyear)
            {
               stt_aux = arr_elementos[j] ;
               arr_elementos[j] = arr_elementos[j + 1];
               arr_elementos[j + 1] = stt_aux;
            }

    return 0;
}

void set_printsongs(char *Ptr_titulo,song arr_elementos[]){

     printf("%s",Ptr_titulo);

     for(int n_iterador = 0; n_iterador < SIZE; n_iterador++)
        printf("%-30s %-30s %-3d\n",
               arr_elementos[n_iterador].str_songname,
               arr_elementos[n_iterador].str_artistname,
               arr_elementos[n_iterador].n_launchyear);

}
