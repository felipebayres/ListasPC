#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
    stack < pair<int,int> >PilhaEstacionamento;
    pair<int,int> Carro,Carro1 , VetorCarros[1000001];
    int Chegada, Saida,VagasSobrando,Motoristas,Vagas,Maior;
    
    scanf("%d %d",&Motoristas,&Vagas);
    
    for (int i = 0 ; i < Motoristas ; i++){
        scanf("%d %d",&Chegada,&Saida);
        Carro = make_pair(Chegada,Saida);
        VetorCarros[i] = Carro;
    }
    
    PilhaEstacionamento.push(VetorCarros[0]);
    Maior = VetorCarros[0].second;
    for ( int i = 1 ; i < Motoristas; i++){
        Carro = PilhaEstacionamento.top() ;
        

        while(Carro.second <= VetorCarros[i].first){
            PilhaEstacionamento.pop();
            if(!PilhaEstacionamento.empty())
                Carro = PilhaEstacionamento.top();
            else
            {
                break;
            }
            
                
        }

        if(PilhaEstacionamento.empty())
            Maior = VetorCarros[i].second;
        if (VetorCarros[i].second > Maior){
            cout << "Nao";
            return 0;
        }
        
        PilhaEstacionamento.push(VetorCarros[i]);
        
        if(PilhaEstacionamento.size() > Vagas){
            cout << "Nao";
            return 0;
        }
    }
    cout << "Sim";
    return 0; 

}