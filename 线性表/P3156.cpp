#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> id(n);
    for(int i =0;i<n;++i){
        cin>>id[i];
    }
    for(int i =0;i<m;++i){
        int temp;
        cin>>temp;
        cout<<id[temp-1]<<endl;
    }
    
    return 0;
}
