#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
    int Valor , quantmoedas , Auxiliar, Auxiliar2;
    scanf("%d %d",&Valor,&quantmoedas);
    Auxiliar = Valor/500;
    Auxiliar2 = Valor%500;
    if ( Auxiliar2 <= quantmoedas)
        cout << "Sim";
    else
        cout << "Nao";

    return 0;
}