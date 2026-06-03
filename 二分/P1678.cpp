#include<bits/stdc++.h>
using namespace std;
int m,n;
long long sum=0;
vector<long long> a;
int main(){
    cin>>m>>n;
    for(int i =0;i<m;i++){
        long long temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i =0;i<n;i++){
        long long temp;
        cin>>temp;
        int pos = lower_bound(a.begin(),a.end(),temp)-a.begin();
        long long mi = 1e18;
        if(pos<m) mi = min(mi,abs(a[pos]-temp));
        if(pos>0) mi = min(mi,abs(a[pos-1]-temp));
        sum+=mi;

    }
    cout<<sum;
    
    return 0;
}