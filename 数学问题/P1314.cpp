#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll s;
vector<int> w,v;
vector<pair<int,int>> lr;
ll cal(int W){
    vector<ll> cnt(n+1,0);
    vector<ll> sum(n+1,0);

    for(int i = 1;i<=n;++i){
        if(w[i-1]>=W){
            cnt[i]=cnt[i-1]+1;
            sum[i]=sum[i-1]+v[i-1];
        }else{
            cnt[i] = cnt[i-1];
            sum[i]=sum[i-1];
        }
    }
    ll Y=0;
    for(int i = 0;i<m;++i){
        int l = lr[i].first;
        int r = lr[i].second;
        ll a = cnt[r]-cnt[l-1];
        ll b = sum[r]-sum[l-1];
        Y+=a*b;
    }
    return Y;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n>>m>>s;
    int min_w = INT_MAX;
    int max_w = 0;
    
    w.resize(n);
    v.resize(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i];
        min_w = min(min_w, w[i]);
        max_w = max(max_w, w[i]);
    }
    
    lr.resize(m);
    for (int i = 0; i < m; ++i) {
        cin >> lr[i].first >> lr[i].second;
    }
    int l = min_w;
    int r = max_w;
    ll  min_diff = LLONG_MAX;
    while(l<=r){
        int mid = (l+r)/2;
        ll Y = cal(mid);
        ll diff = llabs(s-Y);
        if(diff<min_diff){
            min_diff = diff;
        }
        if(Y>s){
            l=mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<min_diff;
    return 0;
}