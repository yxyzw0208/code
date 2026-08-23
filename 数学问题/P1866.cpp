#include<bits/stdc++.h>
using namespace std;
long long Inf = 1e9+7;
int main(){
    int n;
    cin>>n;
    vector<long long> mi(n);
    
    for(int i =0;i<n;++i){
        cin>>mi[i];
    }
    long long ans=1;
    sort(mi.begin(),mi.end());
    for(int i =0;i<n;++i){
        long long choice = mi[i]-i;
        if(choice<=0){
            cout<<0;
            return 0;
        }
        ans=ans*(choice%Inf)%Inf;
    }
    cout<<ans;
    return 0;
}