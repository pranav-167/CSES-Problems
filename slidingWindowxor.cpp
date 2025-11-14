#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll arr[10000000];
int main(){
    ll n,k;
    cin>>n>>k;
    ll x,a,b,c;
    cin>>x>>a>>b>>c;
    arr[0]=x;
    ll XOR=x;
    for(int i=1;i<k;i++){
        x= ((a*x) + b)%c;
        XOR^=x;
        arr[i]=x;
    }
    
    ll xorsum=XOR; 
    for(int i=0;i<n-k;i++){
        x= (a*x + b)%c;
        XOR^=arr[i%k];
        arr[i%k]=x;
        XOR^=x;
        xorsum=(xorsum^XOR);
    }
    cout<<xorsum;
    return 0;
}