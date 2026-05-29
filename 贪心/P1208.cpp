#include<bits/stdc++.h>
using namespace std;
int n,m;
struct famer{
    long long price;
    long long quality;
    famer(long long price,long long quality):price(price),quality(quality){}
};
bool cmp(famer &a,famer &b){
    return a.price<b.price;
}
int main(){
    cin>>n>>m;

    vector<famer> f;
    for(int i =0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        f.push_back(famer(a,b));
    }  
    sort(f.begin(),f.end(),cmp);

    long long sum=0;
    long long money=0;
    int index = 0;
    while(sum<n){
        long long add=(n-sum>=f[index].quality)?f[index].quality:(n-sum);
        sum+=add;
        money+=add*f[index].price;
        index++;
    }
    cout<<money;
    
    return 0;
}