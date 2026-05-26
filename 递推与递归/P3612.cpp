#include<bits/stdc++.h>
using namespace std;
long long n;
long long f(long long len,long long n){
    if(n<=len) return n-1;
    long long l = len;
    while(l*2<n){
        l*=2;
        
    }
    if(n-1-l==0) return f(len,l);//原字符串的最后一个字符情况
    return f(len,n-1-l);
}
int main(){
    char ch[32];
    cin>>ch>>n;
    long long len = strlen(ch);
    long long index = f(len,n);
    cout<<ch[index];

    
    return 0;
}