#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
int Linhas, Colunas,altura = 0,base = 0,j = 0,Flagprimeiro = 0;
int esquerdabaixo = 0,esquerdacima = 0,direitabaixo = 0,direitacima = 0; 
string Linha;
    scanf("%d %d",&Linhas,&Colunas);   
    for (int i = 0 ; i < Linhas ; i++){
        cin >> Linha;
        for(int j = 0;Linha[j] != '\0';j++){
            if (Linha[j] == '1' && Flagprimeiro == 0){
                esquerdacima = j;
                esquerdabaixo = j;
                direitacima = j;
                direitabaixo = j;
                Flagprimeiro = 1;
            }
            if (Linha[j] =='1')
                direitacima = j;
                direitabaixo = j;

        }
        cout << esquerdacima << direitacima << "\n";
    
    
    
    
    }

   


    return 0;
}