#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int Veiculos,Amostragem,PesoMax,AuxiliarCarro,AuxiliarAmostragem = 0,TempoTotal= 0;
    queue<int> Carros;

    scanf("%d %d %d",&Veiculos,&Amostragem,&PesoMax);

    for ( int i = 0 ; i < Veiculos ; i++){
        scanf("%d",&AuxiliarCarro);
        Carros.push(AuxiliarCarro);
    }
    
    
    while(!Carros.empty()){
        
        if ( AuxiliarAmostragem == Amostragem)
            AuxiliarAmostragem = 0;
        
        if ( AuxiliarAmostragem == 0){
            AuxiliarCarro = Carros.front();
            
            if (AuxiliarCarro > PesoMax){
                AuxiliarCarro = AuxiliarCarro - 2;
                Carros.push(AuxiliarCarro);
                TempoTotal = TempoTotal + 10;
            }
            else if (AuxiliarCarro <= PesoMax){
                TempoTotal = TempoTotal + 5;
            }
        }
        else{
            TempoTotal= TempoTotal + 1;
        }
        AuxiliarAmostragem++;
        Carros.pop();
    }
cout << TempoTotal;



return 0;
}
