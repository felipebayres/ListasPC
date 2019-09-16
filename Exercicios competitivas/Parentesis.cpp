#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;


int main()
{
string Expressao;
stack<int> Parentesis;
cin >> Expressao; 
for (int i = 0; i < Expressao.size() ; i++){
    if ( Expressao[i] == '('){
        Parentesis.push(1);
    }
    else if ( Expressao[i] == ')'){
        if (Parentesis.empty()) {
            cout << "nao"; 
            return 0;
        }
        Parentesis.pop();
    
    
    }
}
if(Parentesis.empty())
    cout << "sim";
else 
    cout << "nao";
return 0;
}
