#include <bits/stdc++.h>
#include <functional>
#define pb push_back
using namespace std;
long long int accsum[100000];
long long int query(int l , int r){
    if(l == 0)
        return accsum[r];
    return accsum[r] - accsum[l-1];

}
int main()
{
    long long int soma;
    int N,Q,aux,l,r;
    vector<int> a;
    
    scanf("%d %d",&N,&Q);
    for ( int i = 0; i < N; i++){
        scanf("%d",&aux);
        a.push_back(aux);
    }
    accsum[0] = a[0];
    for ( int i = 1 ; i < N;i++){
        accsum[i] = accsum[i-1] +a[i];
    }

    for ( int q = 0; q < Q; q++){
        scanf("%d %d",&l,&r);
        soma = query(l-1,r-1);
        printf("%lld\n",soma);
    }
    return 0 ;
}