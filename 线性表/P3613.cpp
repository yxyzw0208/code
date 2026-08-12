#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<pair<int,int>,int> bag;
    int c,i,j,k;
    for(int d =0;d<m;d++){
        cin>>c>>i>>j;
        if(c==1){
            cin>>k;
            bag[{i,j}] = k;
        }
        if(c==2){
            cout<<bag[{i,j}]<<endl;
        }
    }
    
    return 0;
}