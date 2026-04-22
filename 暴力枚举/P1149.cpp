#include<bits/stdc++.h>//A,B,C三个数不是个位数，一直没有通过的原因就是没考虑这一点
using namespace std;
int n,cnt = 0 ;
int num[10] = {6,2,5,5,4,5,6,3,7,6};
int count(int x) {
    int res = 0;
    do {
        res += num[x % 10];
        x /= 10;
    } while(x > 0);
    return res;
}
int main(){
    cin>>n;
    if(n<11) {
        cout<<0;
        return 0;
    }
    n-=4;
    for(int i =0;i<1111;i++){
        for(int j =0;j<1111;j++){
            int k = i+j;
            if(count(i)+count(j)+count(k)==n){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}