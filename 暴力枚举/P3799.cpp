/*超时的算法
#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
vector<int> length;
void backtrack(int index,int count,vector<int>&select){
    if(count==4){
        int a = select[0]+select[1],b = select[2],c = select[3];
        if(a==b&&a==c&&b==c){
            cnt++;
        }
        return ;
    }
    for(int i = index;i<n;i++){
        select.push_back(length[i]);
        backtrack(i+1,count+1,select);
        select.pop_back();
    }
}
int main(){
    cin>>n;
    
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        length.push_back(x);
    }
    vector<int> select;
    backtrack(0,0,select);
    cout<<cnt;
    return 0;
}*/
#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int MAX = 5005;
long long cnt[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    
    long long ans = 0;

    for(int i = 1;i<MAX;i++){
        if(cnt[i]<2) continue;
        long long c2  = cnt[i]*(cnt[i]-1)/2%MOD;

        for(int j = 1;j<=i/2;j++){
            int k = i-j;
            if(cnt[j]==0||cnt[k]==0) continue;
            
            long long c;
            if(k==j){
                c = cnt[j]*(cnt[j]-1)/2%MOD;
            }
            else{
                c = cnt[j]*cnt[k]%MOD;
            }
            ans = (ans+c2*c)%MOD;
        }
    }

    cout << ans % MOD << endl;
    return 0;
}