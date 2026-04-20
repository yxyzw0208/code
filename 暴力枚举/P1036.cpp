#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
int number[25];
int pd(int x){
    int flag = 1;
    if(x<2)return 0;
    for(int i = 2;i<sqrt(x);i++){
        if(x%i==0){
            flag = 0;
            break;
        }
    }
    return flag;
} 

void dfs(int index,int cnt,int sum){
    if(cnt==k){
        if(pd(sum))ans++;
        return;
    }
    for(int i =index;i<n;i++){
        dfs(i+1,cnt+1,sum+number[i]);

    }

}

int main(){
    cin>>n>>k;
    
    for(int i =0;i<n;i++){
        cin>>number[i];
    }
    dfs(0,0,0);
    
    cout<<ans;
    return 0;
}