#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int a,b;
    cin>>a>>b;
    int x= (2*a - b);
    int y= (2*b - a);
    if(x%3==0 && y%3==0 && x>=0 && y>=0) cout<<"YES"<<'\n';
    else cout<<"NO"<<"\n";
   }
   
    return 0;
}