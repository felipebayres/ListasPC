#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int Numero,Numeracao[1000];
    string nome;
    pair <string,int> Vetor[9], VetorAntigo[9];
    scanf( "%d" , &Numero);
    for ( int i = 0 ; i < Numero ; i++){
        cin >> nome;
        VetorAntigo[i] = make_pair(nome,i);
        Vetor[i] = make_pair(nome,i);
    }
    sort(Vetor,Vetor+Numero);
    for ( int i = 0 ; i < Numero ; i++)
        Vetor[i] = make_pair(Vetor[i].first,i);

    for (int j = 0 ; j < Numero ; j++){
            for (int i = 0 ; i < Numero ; i++){
                if ( VetorAntigo[j].first == Vetor[i].first){
                    cout << Vetor[i].second << " ";
                }
            
            }
        }
    cout << "\n";
    return 0;
}

    