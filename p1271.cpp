#include<bits/stdc++.h>//尝试过冒泡，时间复杂度太大
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int ai[m];
    for(int i =0;i<m;i++){
        cin>>ai[i];
    }
    sort(ai,ai+m);
    for(int i =0;i<m;i++) cout<<ai[i]<<" ";
    delete []ai;

}