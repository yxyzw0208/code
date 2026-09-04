#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i = 1;i<=n;++i){
        int temp;
        cin>>temp;
        a[i]=a[i-1]+temp;
    }
    int m ;
    cin>>m;
    while(m--){
        int l,r,ans;
        cin>>l>>r;
        ans = a[r]-a[l-1];
        cout<<ans<<"\n";
    }
    return 0;
}
