#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;

int main()
{
    int n,q,l,r,x;
    scanf("%d %d",&n,&q);
    vector<int> v(n,0);
    vector<int> d(v.size(), v[0]);
    d[0] = v[0];
    for(int i = 1; i < v.size(); i++) {
        d[i] = v[i] - v[i-1];
    }
    
    for (int i = 0 ; i < q ; i++){
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
        //cout << vrec[i] << " ";
        cout << vrec[i] << " ";
    }

    return 0; 

}