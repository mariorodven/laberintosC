#include <stdio.h>
#include"laberinto.h"
#include "encruta1.h"
#include <stdlib.h>


int main (int argc, char *argv[])
{
  char laberinto[NFIL][NCOL]={LABERINTO};
  
  if(argc!=3){

    printf("Numero incorrecto de parametros");
  
  } else {
    
    int x=atoi(argv[1]);
    int y=atoi(argv[2]);
    
    if(x>NCOL-1 || x<0 || y>NFIL-1 || y<0){
      
      printf("El punto (%d, %d) no pertenece al laberinto\n", x,y);  //pasar a constante y meterloen algun .h para que quede chulo
    
    }else{
      
      if(laberinto[y][x]=='#'){
        
        printf("El punto (%d, %d) es un obstaculo\n", x,y);
      
      } else {
        
        if(encuentraRuta(laberinto, x, y)==1){
          
          for(int i=0;i<NFIL;i++){
            
            for(int j=0;j<NCOL;j++){
              
              if(laberinto[y][x]=='o'){
                printf(".");
              }else{
              
              printf("%c", laberinto[i][j]);
              
              }
            }
            
            printf("\n");
          }  
        
        }else{
          printf("No existe salida desde el punto(%d, %d).\n", x,y);
        }
      }
    }
  }
return 0;
}

