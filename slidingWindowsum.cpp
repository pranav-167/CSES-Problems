#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll arr[10000000];
int main(){
    ll n,k;
    cin>>n>>k;
    ll x,a,b,c;
    cin>>x>>a>>b>>c;
    ll sum=0;
    arr[0]=x;
    sum+=x;
    for(int i=1;i<k;i++){
        x= ((a*x) + b)%c;
        arr[i]=x;
        sum+=x;
    }
    ll l=0,r=0;
    ll xorsum=sum;  
    for(int i=0;i<n-k;i++){
        x= (a*x + b)%c;
        sum-=arr[i%k];
        arr[i%k]=x;
        sum+=x;
        xorsum=(xorsum^sum);
    }
    cout<<xorsum;
    return 0;
}