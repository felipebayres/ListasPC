#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
int QuantClientes, QuantCaixas;
int VelocidadeCaixa[10000], resultado = 0;
float TempoCaixa,QuantidadeItens;
priority_queue<pair<float, int>,vector<pair<float, int>>,greater<pair<float, int> > > Caixas;
queue<pair<float, int>> Clientes;
pair<float , int> Auxiliar;

scanf("%d %d",&QuantCaixas,&QuantClientes);

for (int i = 0 ;i < QuantCaixas ; i++){
    scanf("%f",&TempoCaixa);
    Auxiliar = make_pair(0,i);
    VelocidadeCaixa[i] = TempoCaixa;
    Caixas.push(Auxiliar);

}
for (int i = 0 ;i < QuantClientes ; i++){
    scanf("%f",&QuantidadeItens);
    Auxiliar = make_pair(QuantidadeItens,i);
    Clientes.push(Auxiliar);
}

int i = 0;
pair<float, int> Auxiliar2,AuxiliarNovo;
AuxiliarNovo.first = 0;
AuxiliarNovo.second = 0;
while (!Clientes.empty()){
   

    Auxiliar = Caixas.top();
    Auxiliar2 = Clientes.front();
    AuxiliarNovo = make_pair(Auxiliar.first+VelocidadeCaixa[Auxiliar.second]*Auxiliar2.first,Auxiliar.second);
    
    Caixas.pop();
    Clientes.pop();
    Caixas.push(AuxiliarNovo);
    if (AuxiliarNovo.first > resultado){
        resultado = AuxiliarNovo.first;
    }
    
}
cout << resultado;
return 0;
}
