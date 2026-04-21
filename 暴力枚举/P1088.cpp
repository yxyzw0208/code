#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    vector<int> num(n);
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    for(int i =0;i<m;i++){
        next_permutation(num.begin(),num.end());
    }
    for(int i =0;i<n;i++){
        cout<<num[i]<<" ";
    }

    return 0;
}