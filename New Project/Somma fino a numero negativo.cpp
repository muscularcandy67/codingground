#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main () {
    float somma,numero;
    somma=0;
    numero=0;
    do{
        cout<<"Inserire il prossimo numero. La somma per ora e' "<<somma<<". Mancano "<<100-somma<<" numeri per arrivare a 100"<<endl;
        cin>>numero;
        somma=somma+numero;
        }while(somma<100);
        cout<<"La somma vale "<<somma<<"."<<endl;
        system("pause");
        }
