#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

float celsius (float f);
float fahrenheit (float c);

int main(void) {    

    for(int c = 0; c <= 100; c++){
        cout << c << " Celsius = " << fahrenheit(c) << " Fahrenheits\n";
    }

    cout << "\n";

    for(int f = 32; f <= 212; f++){
        cout << f << " Fahrenheit = " << celsius(f) << " Celsius\n";
    }

    return 0;
}


float celsius (float f){

    return (f - 32) * 5 / 9;  

}

float fahrenheit (float c){

    return c * 9 / 5 + 32;   
     
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