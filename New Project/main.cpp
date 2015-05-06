#include <iostream>
#include <string>
using namespace std;


int main () {
    int y;
    do{
    int x;
    cout<<"\n Questo programma serve a calcolare l'area del quadrato. Indicare quale variabile hai\n\n0. Lato\n1. Perimetro\n"<<endl;
    cin>>x;
    if (x==0) // Se ha il lato
    {
     float lato, area;
    cout << "Inserisci il lato"<<endl; //Chiede di inserire il lato
    cin >>lato;
    area=lato*lato;
    cout << "L'area del quadrato e' "<<area<<" "<<endl;      
}        
else if (x==1) // Se ha il perimetro
{
     float lato,area,perimetro;
    cout << "Inserisci il perimetro"<<endl; //Chiede di inserire il perimetro
    cin >>perimetro;
    lato=perimetro/4; // Dato interno o di lavoro
    area=lato*lato;
    cout << "L'area del quadrato e' "<<area<<endl;
}
cout<<"\n Devi calcolare un'altra area\n\n0. Si\n1. No\n"<<endl;
cin>>y;
}while (y==0);
} 

