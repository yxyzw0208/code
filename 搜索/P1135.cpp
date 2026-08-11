#include<bits/stdc++.h>
using namespace std;
int n,s,f;
vector<int> k;

int main(){
    cin>>n>>s>>f;
    k.resize(n+1,0);
    for(int i =1;i<=n;++i){
        cin>>k[i];
    }
    vector<int> dis(n+1,-1);
    dis[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int pos = q.front();
        q.pop();
        if(pos==f){
            cout<<dis[pos];
            return 0;
        }
        int step = k[pos];
        int up = step+pos;
        int down = pos-step;
        if(up<=n&&dis[up]==-1){
            dis[up]=dis[pos]+1;
            q.push(up);
        }if(down>0&&dis[down]==-1){
            dis[down]=dis[pos]+1;
            q.push(down);
        }

    }
    cout<<-1;
    return 0;
}