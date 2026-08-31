#include<bits/stdc++.h>
using namespace std;
int x,y;
int da(int p,int q){
    while(q){
        int t=p%q;
        p = q;
        q = t;
    }
    return p;
}


int main(){
    int cnt = 0;
    cin>>x>>y;
    if(y%x!=0){
        cout<<0;
        return 0;
    }
    int k = y/x;
    for(int i = 1;i*i<=k;++i){
        if(k%i==0){
            int j = k/i;
            if(da(i,j)==1){
                cnt++;
                if(i!=j) cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}