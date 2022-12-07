#include "laberinto.h"
#include "encruta1.h"

int encuentraRuta(char tabla[][NCOL], int x, int y){
  
  int encontrado = 0;
  
  if(x==(NCOL-1) || y==(NFIL-1)){
    
    encontrado = 1;
  
  } else {
    tabla[y][x]='o';
    
    if(tabla[y][x+1]=='.')
      encontrado = encuentraRuta(tabla, x+1, y);
    
    if(encontrado==0 && tabla[y][x-1]=='.')
      encontrado = encuentraRuta(tabla, x-1, y);
    
    if(encontrado == 0 && tabla[y+1][x]=='.')
      encontrado = encuentraRuta(tabla, x, y+1);
    
    if(encontrado==0 && tabla[y-1][x]=='.'){
      encontrado = encuentraRuta(tabla, x, y-1);
    }
  }

  if(encontrado == 1)
    tabla[y][x]='*';
  return encontrado;
}
