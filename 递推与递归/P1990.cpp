//取模操作，使用高精度越界
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n==1||n==2){
        cout<<n;
        return 0;
    }
    if(n==3){
        cout<<5;
        return 0;
    }
    long long a= 1,b = 2,c = 5;
    long long d;
    for(int i = 4;i<=n;i++){
        d = (c*2+a)%10000;
        a = b;
        b = c;
        c = d;
    }
    cout<<d;
}