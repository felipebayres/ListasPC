#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
    int Ano,pri,seg,ter,qua,ano;
    scanf("%d",&Ano);
    Ano = Ano + 1;
    ano = Ano;
   
    while (true){
        qua = Ano %10;
        Ano /= 10;
        ter = Ano%10;
        Ano /= 10;
        seg = Ano%10;
        Ano /= 10;
        pri = Ano%10;
        if ((pri != seg) && (pri != ter) && (pri != qua) && (seg != ter) && (seg != qua) && (ter != qua)){
            cout << ano;
            return 0;
        }
        else
            ano = ano + 1;
        Ano = ano;
    }
   
    return 0;
}

    