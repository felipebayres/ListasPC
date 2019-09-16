#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;
bool compare ( int a , int b ){
    if (a < b)
        return true;
    else 
        return false;

}
int main()
{
    int Numero,aux,Resultado = 0;
    vector<int> Vetor;
    scanf("%d",&Numero);
    for (int i = 0 ; i < Numero ; i ++){
        scanf("%d",&aux);
        Vetor.push_back(aux);
    }
    sort(Vetor.begin(),Vetor.end(),compare);
    int i = 1;
    for (auto it = Vetor.begin(); it != Vetor.end(); it++) {
        if ( *it >= i){
            Resultado++;
            i++;
        }
    }
    cout << Resultado;
    return 0;
}