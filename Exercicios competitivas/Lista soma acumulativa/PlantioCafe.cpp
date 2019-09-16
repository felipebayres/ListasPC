#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
    int t,q,n,l,r,x,Resultado = 0;
    scanf("%d %d %d",&n,&q,&t);
    
    vector<int> v(n,0);
    vector<int> d(v.size(), v[0]);
    d[0] = v[0];
    for(int i = 1; i < v.size(); i++) {
        d[i] = v[i] - v[i-1];
    }
    for(int i = 0; i < q ; i++){
        scanf("%d %d %d",&l,&r,&x);
        d[l-1] += x; 
        if (r < d.size()) 
            d[r] -= x;
    }
    long long int atual = d[0];
    vector<long long int> vrec(n,d[0]);
    for(int i = 1 ; i < n ;i++){
        atual = atual + d[i];
        vrec[i] = atual;
    }
    for(int i = 0 ; i < n ; i++){
       if ( vrec[i] >= t)
        Resultado = Resultado + 1;
    }
    cout << Resultado;  
    return 0; 

}