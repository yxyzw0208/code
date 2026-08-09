#include<bits/stdc++.h>
using namespace std;
int n,result=1e+9;
vector<int> s,b;

void dfs(int index,int cs,int cb){
    if(index==n){
        return;
    }
    for(int i = index;i<n;++i){
        int current_s =cs * s[i];
        int current_b =cb + b[i];
        if(abs(current_s-current_b)<result){
            result = abs(current_s-current_b);
        }
        dfs(i+1,current_s,current_b);
        
    }

}
int main(){
    cin>>n;
    for(int i =0;i<n;++i){
        int temp1,temp2;
        cin>>temp1>>temp2;
        s.push_back(temp1);
        b.push_back(temp2);
    }
    dfs(0,1,0);
    cout<<result;
    return 0;
}