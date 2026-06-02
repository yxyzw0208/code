#include<bits/stdc++.h>
using namespace std;
int n;
long long m, a[1000005];
long long f(long long x){//当前高度的木材长度
    long long sum =0;
    for(int i =n;i>0;i--){
        if(a[i]>x) sum+=a[i]-x;
        else break;
    }
    return sum;
}
int main(){
    cin>>n>>m;
    for(int i =1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    long long ans=0,l = 0,r = a[n];
    while(l<=r){
        long long mid = (l+r)/2;//高度
        
        long long val = f(mid);
        if(val>=m){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans;
    
    
    return 0;
}