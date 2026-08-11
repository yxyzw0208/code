#include<bits/stdc++.h>
using namespace std;
int t;
int s[4];
vector<vector<int>> T(4);
void dfs(int x,int k,int l,int r){
    if(k==s[x]){
        t = min(t,max(l,r));
        return;
    }
    dfs(x,k+1,l+T[x][k],r);
    dfs(x,k+1,l,r+T[x][k]);
}
int main(){
    
    for(int i =0;i<4;++i){
        cin>>s[i];
    }
    int ans = 0;
    for(int i =0;i<4;++i){
        for(int j =0;j<s[i];++j){
            int temp;
            cin>>temp;
            T[i].push_back(temp);
        }
        t = 1e9;
        dfs(i,0,0,0);
        ans+=t;
    }
    cout<<ans<<endl;
    
    
}