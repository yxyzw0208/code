#include<bits/stdc++.h>
using namespace std;
vector<int> fa;

int find(int x){
    return (fa[x]==x)?x:(fa[x]=find(fa[x]));
}

int main(){
    int n,m;
    
    while(cin>>n&&n!=0){
        cin>>m;
        
        fa.resize(n+1);
        for(int i =0;i<=n;++i) fa[i]=i;
        int cnt=0;
        for(int i =1;i<=m;++i){
            int f,s;
            cin>>f>>s;
            int a = find(f);
            int b = find(s);
            
            if(a!=b){
                fa[a]=b;
                cnt++;
            }
        }
        cout<<(n-1-cnt)<<endl;
    }
    
    return 0;
}