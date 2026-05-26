#include<bits/stdc++.h>
using namespace std;
vector<int> num;
void f(int n){
    
    if(n==1){//2^0
        cout<< "2(0)";
        return ;
    }
    if(n==2){//2^1
        cout<<"2";
        return;
    }
    int k = 0;
    int p = 1;
    while(p*2<=n){
        k++;
        p*=2;
    }

    cout<<"2";
    if(k!=1){
        cout<<"(";
        f(k);
        cout<<")";
    }
    else ;
    
//0时的问题
    int rest = n-p;
    if(rest>0){
        cout<<"+";
        f(rest);
    }

    
}
int main(){
    int n;
    cin>>n;
    
    f(n);
    return 0;
}