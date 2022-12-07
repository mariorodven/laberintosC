#include <stdio.h>
#include"laberinto.h"

void printTablero(char *tablero, int *posicion);
int route(char *tablero, int *posicion);


int main (int argc, char *argv[])
{
  char tablero[NFIL][NCOL]={LABERINTO};
  int posicion[2]={7,10};
  printf("%d, %d \n", *posicion, *(posicion+1));
  printTablero(&tablero[0][0], posicion);
  return 0;
}

void printTablero(char *tablero, int *posicion){
  for(int i=0;i<NFIL;i++){
    for(int j=0;j<NCOL;j++){
      if(*posicion == i && *(posicion+1)==j){
        printf("*");
      } else {
        int pos = i*NCOL+j;
        printf("%c", tablero[pos]);
      }
    }
      printf("\n");
  }
}

int route(char *tablero, int *posicion){
  
}
