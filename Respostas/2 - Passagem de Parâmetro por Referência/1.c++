#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

void calculos(float l1, float l2, float l3, float& area, float& perimetro);

int main(void) {
    
    float l1, l2, l3, area, perimetro;

    cout << "Informe o valor do primeiro lado: ";
    cin >> l1;
    cout << "Informe o valor do segundo lado: ";
    cin >> l2;
    cout << "Informe o valor do terceiro lado: ";
    cin >> l3;

    calculos(l1, l2, l3, area, perimetro);

    cout << "Area: " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";

    return 0;
}


void calculos(float l1, float l2, float l3, float& area, float& perimetro){

    float sp;

    perimetro = l1 + l2 + l3;
    sp = perimetro / 2;

    area = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));

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