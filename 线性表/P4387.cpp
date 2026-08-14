#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,n;
    cin>>q;
    for(int i =0;i<q;++i){
        cin>>n;
        vector<int> pushed(n),poped(n);
        for(int j =0;j<n;++j) cin>>pushed[j];
        for(int j =0;j<n;++j) cin>>poped[j];
        int index =0,top= 0;
        int stk[100005];
        for(int j = 0;j<n;++j){
            stk[top] = pushed[j];
            while(top>=0&&stk[top]==poped[index]){
                top--;
                index++;
            }
            top++;
            
        }
        cout << (top == 0 ? "Yes" : "No") << '\n';
    }
    
    return 0;
}