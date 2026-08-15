#include<bits/stdc++.h>
using namespace std;
int ans = 0;
struct tree{
    int l;
    int r;
};
void dfs(vector<tree> &t,int index,int cnt){
    if(t[index].l==0&&t[index].r==0){
        ans=max(ans,cnt);
        return;
    }
    cnt++;
    dfs(t,t[index].l,cnt);
    dfs(t,t[index].r,cnt);
}
int main(){
    int n ;
    cin>>n;
    vector<tree> t(n+1);
    for(int i =1;i<=n;++i){
        int l,r;
        cin>>l>>r;
        t[i]={l,r};
    }
    dfs(t,1,1);
    cout<<ans;
    return 0;
}