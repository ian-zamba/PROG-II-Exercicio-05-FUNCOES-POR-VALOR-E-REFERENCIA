#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

struct Carro{
    float tempo;
    float valor;
};

float LerDados(int numero);
float CalculaTaxas(float tempo);
void ImprimirDados(float valor1, float valor2, float valor3, float tempo1, float tempo2, float tempo3, float tempototal, float valortotal);
void Continuar(char& continuar);


int main(void) {
    
    struct Carro carro1;
    struct Carro carro2;
    struct Carro carro3;
    float valortotal, tempototal;
    char continuar;

    do{

        carro1.tempo = LerDados(1);
        carro2.tempo = LerDados(2);
        carro3.tempo = LerDados(3);
        tempototal = carro1.tempo + carro2.tempo + carro3.tempo;

        carro1.valor = CalculaTaxas(carro1.tempo);
        carro2.valor = CalculaTaxas(carro2.tempo);
        carro3.valor = CalculaTaxas(carro3.tempo);
        valortotal = carro1.valor + carro2.valor + carro3.valor;

        ImprimirDados(carro1.valor, carro2.valor, carro3.valor, carro1.tempo, carro2.tempo, carro3.tempo, tempototal, valortotal);

        Continuar(continuar);
    }while(continuar == 's');

    return 0;
}


float LerDados(int numero){

    float carro;

    cout << "Forneca o tempo de permanencia do " << numero << " cliente: ";
    cin >> carro;

    return carro;
}

float CalculaTaxas(float tempo){

    float valor = 2.0;

    if(tempo > 3){

        tempo -= 3;

        while(valor < 10.0){
            valor += 0.25;
            tempo -= 0.5;
            if(tempo == 0){
                break;
            }
        }


    }

    return valor;
}

void ImprimirDados(float valor1, float valor2, float valor3, float tempo1, float tempo2, float tempo3, float tempototal, float valortotal){

    cout << "Carro 1: "<< tempo1 << "hrs de permanencia, Taxa de R$ ";
    printf("%.2f\n", valor1);
    cout << "Carro 1: "<< tempo2 << "hrs de permanencia, Taxa de R$ ";
    printf("%.2f\n", valor2);
    cout << "Carro 1: "<< tempo3 << "hrs de permanencia, Taxa de R$ ";
    printf("%.2f\n", valor3);
    cout << "TOTAL: Horas["<< tempototal <<"] / Taxas[R$ ";
    printf("%.2f]\n", valortotal);

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