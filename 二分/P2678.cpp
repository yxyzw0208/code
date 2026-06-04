#include<bits/stdc++.h>
using namespace std;
int L,N,M;
int stone[50005]={0};
bool check(vector<int> a,int ans){
    sort(a.begin(),a.end());
    return a[0]==ans;
}
int main(){
    cin>>L>>N>>M;
    
    for(int i =1;i<=N;i++){
        cin>>stone[i];
    }
    stone[N+1] = L;
    int l = 1,r = L,ans = 0;
    while(l<=r){
        int mid = (l+r)/2;//设为最小
        int last = 0,cnt=0;//last上一个保留的位置
        //遍历所有石头
        for(int i =1;i<=N+1;i++){
            if(mid>stone[i]-last){
                cnt++;
            }
            else{
                last = stone[i];
            }
        }
        if(cnt<=M){
            //要找最大
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans;
    
    return 0;
}