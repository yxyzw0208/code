#include<bits/stdc++.h>
using namespace std;
unordered_set<long long> heng,zong;
long long cnt=0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    int k;
    cin>>n>>k;
    for(int i =0;i<k;++i){
        long long x,y;
        cin>>x>>y;
        heng.insert(x);
        zong.insert(y);
    }
    long long a = heng.size();
    long long b = zong.size();
    cnt = a*n+b*n-a*b;
    cout<<cnt<<endl;
    return 0;
}