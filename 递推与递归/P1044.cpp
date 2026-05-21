#include <bits/stdc++.h>
using namespace std;
int n;
;
long long cnt(int x,vector<int> &stk){
    if(x<0||x>n) return 0;
    if(x==n) return 1;
    long long ans = 0;

    stk.push_back(x);//压入
    ans +=cnt(x+1,stk);
    stk.pop_back();//回溯

    if(!stk.empty()){
        int top = stk.back();
        stk.pop_back();
        ans += cnt(x,stk);
        stk.push_back(top);
    }
    return ans;
}
int main(){
    cin>>n;
    vector<int> stk;
    cout<<cnt(0,stk);
    return 0;
}