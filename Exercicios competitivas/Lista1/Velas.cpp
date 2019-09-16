#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int n,k,Horas,VelasContruidas = 1,Resto = 0,pedacos = 0,Usadas = 0;
    scanf("%d %d",&n,&k);
    Horas = n;
    Usadas = n;
    while(n > 0 || n%k > k){
        n = Usadas/k;
        Usadas = Usadas%k + n;
        Horas = Horas + n;
    }
    cout << Horas;
    return 0;
}

    