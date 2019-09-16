#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
    int a , b , n,auxiliar,auxiliar2,Somadigitos = 0,Resultado = 0;
    scanf("%d %d %d",&n,&a,&b);

    for ( auxiliar = 1 ; auxiliar <= n ; auxiliar++){
        auxiliar2 = auxiliar;
        Somadigitos = 0;
        while (auxiliar2 != 0) {
            Somadigitos = Somadigitos + auxiliar2 % 10;
            auxiliar2 = auxiliar2 / 10;
        }
        if (Somadigitos >= a && Somadigitos <= b){
            Resultado = Resultado + auxiliar;
        }
        
    }
    cout << Resultado;
}