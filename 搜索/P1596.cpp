#include<bits/stdc++.h>
using namespace std;
int n,m,cnt = 0;
struct node{
    char word;
    bool pd = false;
};

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void dfs(vector<vector<node>> &w,int a,int b){
    w[a][b].pd = true;
    bool flag = false;
    for(int d = 0;d<8;++d){
        int x = a+dx[d];
        int y = b+dy[d];
        if(x<0||y<0||x>=n||y>=m) continue;
        if(w[x][y].word=='W'&&!w[x][y].pd) {
            dfs(w,x,y);
        }
    }
}

int main(){
    cin>>n>>m;
    
    vector<vector<node>> w(n,vector<node>(m));
    for(int i = 0;i<n;++i){
        for(int j =0;j<m;++j){
            cin>>w[i][j].word;
        }
    }
    for(int i =0;i<n;++i){
        for(int j =0;j<m;++j){
            if(w[i][j].word=='W'&&!w[i][j].pd){
                w[i][j].pd = true;
                dfs(w,i,j);
                cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}