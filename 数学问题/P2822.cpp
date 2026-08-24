#include<bits/stdc++.h>
using namespace std;
const int M = 2005;
long long rem[M][M];
int ans[M][M];
int main(){
    int t,k;
    cin>>t>>k;
    rem[0][0]=1%k;
    for(int i =0;i<M;++i){
        for(int j =0;j<=i;++j){
            if(j==0) rem[i][j]=1%k;
            else rem[i][j]=(rem[i-1][j]+rem[i-1][j-1])%k;
        }
    }
    for(int i =0;i<M;++i){
        for(int j =0;j<M;++j){
            if(j>i){
                ans[i][j]= ans[i][i];
                continue;
            }
            int add = (rem[i][j]==0)?1:0;
            if(i==0&&j==0) ans[i][j] = add;
            else if(i==0) ans[i][j]=ans[i][j-1]+add;
            else if(j==0) ans[i][j]=ans[i-1][j]+add;
            else ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1]+add;
        }
    }
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<ans[n][m]<<"\n";
    }
    return 0;
}