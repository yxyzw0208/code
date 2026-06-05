#include<bits/stdc++.h>
using namespace std;
int L,N,K;
int sgn[100005];
bool check(int q){
    int res = 0;
    for(int i =1;i<N;i++){
        res += (sgn[i+1]-sgn[i]-1)/q;
    }
    return res <= K;
}
int main(){
    cin>>L>>N>>K;
    for(int i =1;i<=N;i++){
        cin>>sgn[i];
    }
    int l = 1,r=L,ans = -1;
    while(l<=r){
        int mid =(l+r)/2;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid+1;
    }
    cout<<ans;
    return 0;
}