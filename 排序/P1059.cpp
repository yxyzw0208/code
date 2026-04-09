#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    unordered_map<int,int> table;
    int count=0;
    for(int i =0;i<n;i++){
        auto it = table.find(num[i]);
        if(it!=table.end()){
            continue;
        }
        table[num[i]] = 1;
        count++;
    }
    cout<<count<<endl;
    for(auto &elment:table){
        cout<<elment.first<<" ";
        
    }
    
}
