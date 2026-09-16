#include<bits/stdc++.h>
using namespace std;
int n,p;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>p;
    vector<int> d(n+1,0);
    int temp = 0;
    for(int i =1;i<=n;++i){
        int t;
        cin>>t;
        d[i]=t-temp;
        temp = t;
    }
    while(p--){
        int x,y,z;
        cin>>x>>y>>z;
        d[x]+=z;
        if(y<n) d[y+1]-=z;
    }
    int ans = INT_MAX;
    int ai = 0;
    for(int i =1;i<=n;++i){
        ai += d[i];
        ans=min(ans,ai);
    }
    cout<<ans;
    return 0;
}
