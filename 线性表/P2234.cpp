#include<bits/stdc++.h>
using namespace std;
int n ;
int main(){
    cin>>n;
    vector<int> m(n+1,0);
    int ans = 0;
    for(int i =1;i<=n;i++){
        cin>>m[i];
        if(i==1){
            ans+=m[i];
            continue;
        }
        int x = 1e6+5;
        for(int j =1;j<i;j++){
            int y = abs(m[i]-m[j]);
            if(y<x) x = y;
        }
        ans +=x;
    }
    
    cout<<ans;
    return 0;
}