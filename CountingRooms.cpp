#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
 
    char buil[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>buil[i][j];
        }
    }
 
    int vis[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j] = 0;
        }
    }
 
 
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(buil[i][j]=='.' && !vis[i][j]){
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()){
                    auto front= q.front();
                    int r=front.first;
                    int c=front.second;
                    q.pop();
                    int tmpr,tmpc;
                    for(int k=0;k<4;k++){
                        tmpr=r,tmpc=c;
                        if(k==0) tmpr++;
                        else if(k==1) tmpr--;
                        else if(k==2) tmpc++;
                        else tmpc--;
 
                        if(tmpr>=0 && tmpc>=0 && tmpr<n && tmpc<m && buil[tmpr][tmpc]=='.' && !vis[tmpr][tmpc]){
                            vis[tmpr][tmpc]=1;
                            q.push({tmpr,tmpc});
                        }
                    }
                    
                }
               cnt++;
                
            }
        }
    }
 
    cout<<cnt;
    return 0;
