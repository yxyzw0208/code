#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        q.push({temp});
    }
    int sum=0;
    for(int i =1;i<n;i++){
        int temp = q.top();
        q.pop();
        temp +=q.top();
        q.pop();
        sum+=temp;
        q.push({temp});
    }
    cout<<sum;
    
    return 0;
}