#include<bits/stdc++.h>
using namespace std;
void backtrack(int start, int target, int num,vector<int> &ans){
    
    if(target==0){
        for(int i =0;i<ans.size();++i){
            if(i)cout<<"+";
            cout<<ans[i];
        }
        cout<<"\n";
        return;
    }
    for(int i = start;i<num&&i<=target;++i){
        ans.push_back(i);
        backtrack(i,target-i,num,ans);
        ans.pop_back();
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    backtrack(1,n,n,ans);
    return 0;
}