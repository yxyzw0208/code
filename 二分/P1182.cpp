//注意溢出问题
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int main(){
    cin>>n>>m;
    long long l = 0,r =0 ,ans = -1;
    for(int i =1;i<=n;i++){
        cin>>a[i];
        r+=a[i];
        l = max(l,(long long)a[i]);
    }
    
    while(l<=r){
        long long mid = (l+r)/2;
        int cnt = 0;
        long long sum = 0;
        for(int i =1;i<=n;i++){
            if(sum+a[i]<=mid){
                sum+=a[i];
            }
            else{
                cnt++;
                sum = a[i];
            }
        }
        cnt++;
        if(cnt>m){
            l = mid+1;
        }else{
            
            ans = mid;
            r = mid-1;
        }
    }
    cout<<ans;
    return 0;
}
