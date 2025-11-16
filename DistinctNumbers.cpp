#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    set<int> s;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])==s.end()){
            cnt++;
        }
        s.insert(v[i]);
    }
    cout<<cnt;
    return 0;
