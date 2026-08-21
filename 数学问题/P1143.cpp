#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    string t;
    cin>>n>>t>>m;
    int shi=0;
    for(char c:t){
        int digit;
        if(c>='0'&&c<='9'){
            digit = c-'0';
        }
        else{
            digit = c-'A'+10;
        }
        shi=shi*n+digit;
    }
    string ans;
    string table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(shi){
        ans+=table[shi%m];
        shi/=m;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}
