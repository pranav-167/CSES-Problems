#include<bits/stdc++.h>
using namespace std;

long long func(vector<int> v){
    long long cnt=0;
    if(v.size()==1) return cnt;
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            cnt+=(long long)(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long ans=func(v);
    cout<<ans;
    return 0;
}