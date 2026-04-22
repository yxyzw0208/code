#include<bits/stdc++.h>
using namespace std;
int a,b;
bool pd_parlindrome(int x){
    int original = x;
    int reversed = 0;
    while(x>0){
        reversed = reversed*10+x%10;
        x/=10;
    }
    return original == reversed;
}
bool pd_prime(int x){
    if(x<=1) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i = 3;i<=sqrt(x);i+=2){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    cin>>a>>b;
    
    for(int i=a;i<=b;i++){
        if(pd_parlindrome(i)&&pd_prime(i)) {
            cout<<i<<'\n';
        }
    }

    return 0;
}