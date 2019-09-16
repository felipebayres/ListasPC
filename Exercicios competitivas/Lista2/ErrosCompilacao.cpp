#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{

    int N,Numeros,Vetor[100000],erro = 0,Total = 0,Aux,Total1 = 0,Total2 = 0;
    set<int> Erros,Erros1;
    scanf("%d",&N);

    for( int i = 0 ; i < N; i++){
        scanf("%d",&Aux);
        Total = Total + Aux;
    }
    for( int i = 0 ; i < N -1; i++){
        scanf("%d",&Aux);
        Total1 = Total1 + Aux;
    }
    cout << Total - Total1 << "\n";
    for( int i = 0 ; i < N - 2 ; i++){
        scanf("%d",&Aux);
        Total2 = Total2 + Aux;
    }
    cout << Total1 - Total2;
    return 0; 

}