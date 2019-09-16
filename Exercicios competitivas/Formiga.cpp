#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
string Expressao;
int contador = 0,contagem = 0,resultado = 0,i = 0;
char Auxiliar;
queue<char> fila;

cin >> Expressao;

for (int i = 0; i < Expressao.size(); i++){
    fila.push(Expressao[i]);
    Auxiliar = fila.front();
    if (fila.front() == 'r' && contagem == 0){
        contagem = 1;
    }
    else if ( contagem == 1 && Auxiliar == '.'){
        contador++;
    }
    else if (contagem == 1 && Auxiliar == 's'){
        contador = 0;
        contagem = 0;
    }
    else if (contagem == 1 && Auxiliar == 'r' ){
        resultado = resultado + contador;
        contador = 0;
    }
fila.pop();
}
resultado = resultado + contador;
cout << resultado;
return 0;
}
