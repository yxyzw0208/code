#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> num;
vector<bool> used;
void backtrack(int cnt){
    if(cnt==n){
        for(int i =0;i<n;i++){
            cout<<setw(5)<<num[i];
        }
        cout<<endl;
        return;
    }
    for(int i =1;i<=n;i++){
        if(!used[i]){
            used[i] = true;
            num.push_back(i);
            backtrack(cnt+1);
            num.pop_back();
            used[i] = false;
        }
    }

}
int main(){
    cin>>n;
    used.resize(n+1);
    backtrack(0);
    
    return 0;
}
