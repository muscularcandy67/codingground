#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main () {
    float a,b,c;
    c=1;
            cout<<"Questo programma esegue la somma di più numeri fino a quando inserisci un numero negativo"<<endl;
    do{
        cout<<"Inserisci il "<<c<<"° numero"<<endl;
        cin>>a;
       if (a>=0)
       {
        b=b+a;
        c=c+1;
        cout<<"La somma totale e' "<<b<<endl;
        }
    }while(a>=0);
    cout<<"Hai inserito un numero negativo e il programma si e' interrotto in quanto la somma di un numero negativo equivale a una sottrazione"<<endl;
    system("pause");
}
