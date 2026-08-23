#include<bits/stdc++.h>
using namespace std;

void tans(int n,int R){
    if(n==0) return;
    int m=n%R;
    if(m<0) m-=R,n+=R;
    if(m>=10) m='A'+m-10;
    else m+='0';
    tans(n/R,R);
    printf("%c",m);
    return;
}
int main(){
    int n,R;
    cin>>n>>R;
    int temp = n;
    
    
    cout<<n<<"=";
    tans(n,R);
    cout<<"(base"<<R<<")";
    return 0;
}