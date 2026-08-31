#include<bits/stdc++.h>
using namespace std;
long long gcd(int a,int b){
    while(b){
        int t = a%b;
        a =b;
        b = t;
    }
    return a;
}
long long lcm(int a,int b){
    return a/gcd(a,b)*b;
}
vector<long long> div(long long n){
    vector<long long> res;
    for(long long i =1;i*i<=n;++i){
        if(n%i==0){
            res.push_back(i);
            if(i*i!=n) res.push_back(n/i);
        }
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    
    for(int i =0;i<n;++i){
        long long a0,a1,b0,b1,cnt=0;
        cin>>a0>>a1>>b0>>b1;
        if (b1 % b0 != 0 || a0 % a1 != 0) {
            cout << 0 << '\n';
            continue;
        }
        vector<long long> t = div(b1);
        for(long long x:t){
            if(x%a1!=0) continue;
            if(gcd(x,a0)==a1&&lcm(x,b0)==b1) cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}