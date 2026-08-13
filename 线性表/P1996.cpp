#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    queue<int> id;
    for(int i =1;i<=n;i++){
        id.push(i);
    }
    int cnt=0;
    while(!id.empty()){
        int x= id.front();
        id.pop();
        cnt++;
        if(cnt==m){
            cout<<x<<" ";
            cnt=0;
        }
        else{
            id.push(x);
        }
    }
    return 0;
}