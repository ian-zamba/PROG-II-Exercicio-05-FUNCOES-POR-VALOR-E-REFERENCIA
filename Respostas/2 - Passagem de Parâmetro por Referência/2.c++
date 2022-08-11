#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

void Leitura(int& quantiaRestante);
void CalculaMoedas(int valorDaMoeda, int& quantidade, int& quantiaRestante);
void Continuar(char& continuar);


int main(void) {
    
    int valorDaMoeda, quantidade, quantiaRestante;
    char continuar;

    do{

        Leitura(quantiaRestante);
        cout << "86 centavos podem ser fornecidos como:\n";

        valorDaMoeda = 25;
        CalculaMoedas(valorDaMoeda, quantidade, quantiaRestante);
        cout << quantidade << " de 25 centavo(s), ";
        valorDaMoeda = 10;
        CalculaMoedas(valorDaMoeda, quantidade, quantiaRestante);
        cout << quantidade << " de 10 centavo(s), ";
        valorDaMoeda = 1;
        CalculaMoedas(valorDaMoeda, quantidade, quantiaRestante);
        cout << quantidade << " de 1 centavo(s)\n";

        Continuar(continuar);
    }while(continuar == 's');

    return 0;
}


void Leitura(int& quantiaRestante){

    cout << "Iforme o valor: ";
    cin >> quantiaRestante;

}

void CalculaMoedas(int valorDaMoeda, int& quantidade, int& quantiaRestante){

    quantidade = quantiaRestante / valorDaMoeda;
    quantiaRestante = quantiaRestante % valorDaMoeda;

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