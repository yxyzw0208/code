#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<int,int> p;
    cin>>n;
    for(int i =1;i<=n;++i){
        int a;
        cin>>a;
        p.insert({a,i});
    }
    int q;
    cin>>q;
    for(int i =0;i<q;++i){
        int m;
        cin>>m;
        auto it = p.find(m);
        if(it!= p.end()){
            cout<<it->second<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
    return 0;
}