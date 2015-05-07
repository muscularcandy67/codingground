#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int A,B,T;
    cout<<"Inserisci il numero da moltiplicare"<<endl;
    cin>>A;
    cout<<"Inserisci il numero per cui moltiplicare"<<endl;
    cin>>B;
    T=0;
    do{
          T=T+A;
          B=B-1;
          }while(B>0);
          cout<<"Il risultato e' "<<T<<endl;
          system ("pause");
          }
