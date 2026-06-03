#include<bits/stdc++.h>
using namespace std;
int n;
long long k,lenth[100005],ans=0;
long long pd(long long len){
    long long res = 0;
    for(int i =1;i<=n;i++){
        res+=(lenth[i]/len);
    }
    return res;
}
int main(){
    cin>>n>>k;
    long long sum =0;
    for(int i =1;i<=n;i++){
        cin>>lenth[i];
    }
    long long l=1,r=1e+8;
    
    while(l<=r){
        long long mid = (l+r)/2;
        long long val_mid = pd(mid);
        if(val_mid>=k){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    
    cout<<ans;

    
    return 0;
}