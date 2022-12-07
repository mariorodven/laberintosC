#include "laberinto.h"
#include <stdio.h>

void printTablero(char *tablero,int *posicion);
int route(char *tablero, int *posicion);
int readChar(char *tablero,int *posicion);

int main (int argc, char *argv[])
{
  int n=1;
  char tablero[NFIL][NCOL]={LABERINTO};
  int posicion[2]={7,10};
  printTablero(&tablero[0][0], posicion);
  while(n==1){
    //n=route(tablero,posicion);
  }
  return 0;
}

void printTablero(char *tablero, int *posicion){
  for(int i=0;i<NFIL;i++){
    for(int j=0;j<NCOL;j++){
      if(posicion[0]==i && posicion[1]==j){
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
  if(posicion[0]>=0 && posicion[0]<12 && posicion[1]>=0 && posicion[1]<12){
    if(readChar(tablero, )==1){
      x = x+1;
      printTablero(tablero, posicion);
      return 1;
    } else if(readChar(tablero, posicion[1]+1)==1){
      y+=1;
      printTablero(tablero, posicion[0],posicion[1]);
      return 1;
    } else if(readChar(tablero, posicion[0]-1, posicion[1])==1){
      x = x-1;
      printTablero(tablero, posicion[0], posicion[1]);
      return 1;
    } else if(readChar(tablero, posicion[0], posicion[1]-1)==1){
      y = y-1;
      printTablero(tablero, posicion[0], posicion[1]);
      return 1;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}

int readChar(char *tablero, int *posicion){
  if(tablero[x][y]=='#'){
    return 0;
  } else if(tablero[x][y]=='.'){
    return 1;
  } else {
    return 2;
  }
}
