#include<bits/stdc++.h>
using namespace std;
int n,r;
vector<int> num;
void backtrack(int index,int cnt){
    if(cnt==r){
        for(int i = 0;i<r;i++){
            cout<<setw(3)<<num[i];
        }
        cout<<endl;
        return ;
    }
    for(int i = index;i<=n;i++){
        num.push_back(i);
        backtrack(i+1,cnt+1);
        num.pop_back();
    }
}
int main(){
    cin>>n>>r;
    backtrack(1,0);
    
    return 0;
}