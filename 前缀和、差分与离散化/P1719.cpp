#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> num(n+1,vector<int>(n+1,0));
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=n;++j){
            cin>>num[i][j];
            dp[i][j]=dp[i][j-1]+dp[i-1][j]+num[i][j]-dp[i-1][j-1];
        }
    }
    int ans = INT_MIN;
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=n;++j){
            for(int k = 0;k<i;++k){
                for(int l = 0;l<j;++l){
                    int x =dp[i][j]-dp[k][j]-dp[i][l]+dp[k][l];
                    ans=max(ans,x);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}