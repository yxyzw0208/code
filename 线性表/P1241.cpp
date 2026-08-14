#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();

    vector<int> vis(n,0);
    stack<int> stk;
    for(int i =0;i<n;i++){
        if(s[i]=='('||s[i]=='['){
            stk.push(i);
        }
        else if(s[i]==')'){
            if(!stk.empty()&&s[stk.top()]=='('){
                vis[i]=1;
                vis[stk.top()]=1;
                stk.pop();
            }
        }
        else if(s[i]==']'){
            if(!stk.empty()&&s[stk.top()]=='['){
                vis[i]=1;
                vis[stk.top()]=1;
                stk.pop();
            }
        }
    }
    for(int i =0;i<n;i++){
        if(vis[i]){
            cout<<s[i];
        }
        else if(s[i]=='('||s[i]==')'){
            cout<<"()";
        }
        else{
            cout<<"[]";
        }
    }
    
    return 0;
}