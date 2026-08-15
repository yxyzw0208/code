#include<bits/stdc++.h>
using namespace std;
int n,m,p;
vector<int>pe;
int find(int x){
    if(x==pe[x]) return x;
    else{
        pe[x] = find(pe[x]);
        return pe[x];
    }
}
int main(){
    cin>>n>>m>>p;
    pe.resize(n+1);
    for(int i =1;i<=n;i++){
        pe[i]=i;
    }
    for(int i = 0;i<m;++i){
       int f,s;
       cin>>f>>s;
       int fa=find(f);
       int fb=find(s);
       if(fa!=fb) pe[fa] = fb;
    }
    for(int i =0;i<p;++i){
        int pi,pj;
        cin>>pi>>pj;
        if(find(pi)==find(pj)) cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}