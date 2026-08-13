#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,cnt=0;
    cin>>m>>n;
    queue<int> q;
    vector<bool> be(1005,false);
    for(int i =1;i<=n;++i){
        int x;
        cin>>x;
        if(be[x]) continue;
        if(q.size()==m){
            int front = q.front();
            q.pop();
            be[front] = false;
        }
        q.push(x);
        be[x] = true;
        cnt++;
    }
    cout<<cnt;
    return 0;
}