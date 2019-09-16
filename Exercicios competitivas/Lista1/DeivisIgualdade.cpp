#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int n,x,Vetor[1000000],Resultado = 0,Maior;

    scanf("%d",&n);
    for (int i = 0; i < n ; i++)
        scanf ("%d",&Vetor[i]);
    Maior = *max_element(Vetor , Vetor + n);
    for (int i = 0; i < n ; i++){
        Resultado = Resultado + Maior - Vetor[i];
    }
    cout << Resultado;
    return 0;
}
