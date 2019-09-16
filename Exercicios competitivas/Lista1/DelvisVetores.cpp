#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int n,x,VetorA[100],VetorB[100],AuxiliarA,AuxiliarB,Resultado;

    scanf("%d %d",&n,&x);
    for (int i = 0; i < n ; i++)
        scanf("%d",&VetorA[i]);
    for (int i =0 ;i < n; i++)
        scanf("%d",&VetorB[i]);
    
    for (int i = 0 ; i < n; i++){
        AuxiliarA = VetorA[i];
        for(int j = 0 ; j < n; j++){
            AuxiliarB = VetorB[j];
            Resultado = AuxiliarA + AuxiliarB;
            if (Resultado == x){
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}
