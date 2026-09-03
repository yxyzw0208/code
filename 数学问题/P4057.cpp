#include<bits/stdc++.h>
using namespace std;
long long g(long long x,long long y){
    return y==0?x:g(y,x%y);
}
long long l(long long x,long long y){
    return abs(x*y)/g(x,y);
}
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<l(a,l(b,c));
    
    return 0;
}