#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int MAXN=405;
int time_break[MAXN][MAXN];
int vis[MAXN][MAXN];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
struct Node
{
    int x,y;
};

int main(){
    int m;
    cin>>m;
    for(int i =0;i<MAXN;++i){
        for(int j =0;j<MAXN;++j){
            time_break[i][j]=INF;
            vis[i][j]=-1;
        }
    }
    for(int i =1;i<=m;++i){
        int x,y,t;
        cin>>x>>y>>t;
        vector<pair<int,int>> pts={{x,y},{x+1,y},{x-1,y},{x,y-1},{x,y+1}};
        for(auto [px,py]:pts){
            if(px>=0&&px<MAXN&&py>=0&&py<MAXN){
                time_break[px][py]=min(time_break[px][py],t);
            }
        }
    }
    queue<Node>q;
    if(time_break[0][0]==0){
        cout<<-1<<endl;
        return 0;
    }
    q.push({0,0});
    vis[0][0]=0;
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        int x=cur.x;
        int y=cur.y;
        int now_t=vis[x][y];
        for(int k =0;k<4;++k){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(nx<0||ny<0||nx>=MAXN||ny>=MAXN) continue;
            int nxt = now_t+1;
            if(time_break[nx][ny]==INF){
                cout<<nxt<<endl;
                return 0;
            }
            if(nxt<time_break[nx][ny]&&vis[nx][ny]==-1){
                vis[nx][ny]=nxt;
                q.push({nx,ny});
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}