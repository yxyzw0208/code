#include<bits/stdc++.h>
using namespace std;

bool Jolly(vector<int> arr,int n){
    if(n<=1) return true;
    unordered_set<int>diffs;
    for(int i =0;i<n-1;i++){
        int d = abs(arr[i]-arr[i+1]);

        if(d<1||d>n-1||diffs.count(d)){//diffs.count(d):若存在d,返回1;否则返回0;
            return false;
        }
        diffs.insert(d);
    }
    return diffs.size() == n-1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    if(Jolly(arr,n)) cout<<"Jolly";
    else cout<<"Not jolly";
    
}
