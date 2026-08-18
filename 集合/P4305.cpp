#include<bits/stdc++.h>
using namespace std;
int T;

int main(){
    
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> num;
        unordered_set<int> pd;
        for(int i =0;i<n;++i){
            int temp;
            cin>>temp;
            if(pd.find(temp)==pd.end()){
                num.push_back(temp);
                pd.insert(temp);
            }
            
        }
        for(auto it:num){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    
    
    return 0;
}