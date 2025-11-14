#include<bits/stdc++.h>
using namespace std;

int maxCnt(string s){
    int maxcnt=INT_MIN;
    int cnt=1;
    if(s.size()==1) {
        return 1;
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) cnt++;
        else cnt=1;

        maxcnt=max(maxcnt,cnt);
    }
    return maxcnt;
}
int main(){
    string s;
    cin>>s;
    int maxcnt=maxCnt(s);
    cout<<maxcnt;
    return 0;
}