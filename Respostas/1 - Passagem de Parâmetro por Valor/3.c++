#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

float Sgnds(float horas, float min, float segundos);

int main(void) {
    
    float horas, min, segundos;
    float seg1, seg2;

    cout << "Informe a primeira hora (00:00:00): \n";
    scanf("%f:%f:%f", &horas, &min, &segundos);

    seg1 = Sgnds(horas, min, segundos);

    cout << "Informe a segunda hora (00:00:00): \n";
    scanf("%f:%f:%f", &horas, &min, &segundos);

    seg2 = Sgnds(horas, min, segundos);

    if(seg1 > seg2){
        cout << "Diferenca em Segundos: " << seg1-seg2 << "S\n";
        cout << "Diferenca em Horas: " << (seg1-seg2) / 3600 << "H\n";
    }else{
        cout << "Diferenca em Segundos: " << seg2-seg1 << "S\n";
        cout << "Diferenca em Horas: " << (seg2-seg1) / 3600 << "H\n";
    }

    return 0;
}


float Sgnds(float horas, float min, float segundos){

    segundos += min * 60;
    segundos += horas * 3600;
    return segundos;

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