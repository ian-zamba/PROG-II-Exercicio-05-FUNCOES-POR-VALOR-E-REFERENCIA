#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

void Ler(int& horas, int& minutos, char& AMPM);
void Calcular(int& horas);
void Escrever(int horas, int minutos, char AMPM);
void Continuar(char& continuar);

int main(void) {
    
    int horas;
    int minutos;
    char AMPM, continuar;
    do{
        Ler(horas, minutos, AMPM);
        Calcular(horas);
        Escrever(horas, minutos, AMPM);
        Continuar(continuar);
        
    }while(continuar == 's');    

    return 0;
}


void Ler(int& horas, int& minutos, char& AMPM){

    cout << "Inform as horas - ";
    scanf("%d:%d", &horas, &minutos);
    if(horas >= 12 && horas <=23){
        AMPM = 'P';
    }else{
        AMPM = 'A';
    }
    
}

void Calcular(int& horas){

    if(horas > 12 && horas <=23){
        horas = horas - 12;
    }

}

void Escrever(int horas, int minutos, char AMPM){

    cout << horas << ":" << minutos << " " << AMPM <<".M.\n";

}

void Continuar(char& continuar){

    cout << "Deseja continuar? s/n\n";
    do{
        continuar = getch();
    } while (continuar != 's' && continuar != 'n');

}


/*
                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/