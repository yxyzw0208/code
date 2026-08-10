#include<bits/stdc++.h>
using namespace std;
int n,m,t,sx,sy,fx,fy,cnt=0;
int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};
void dfs(vector<vector<bool>> &pd,int cx,int cy){
    if(cx==fx&&cy==fy){
        cnt++;
        return;
    }
    for(int d =0;d<4;d++){
        int x = cx+dx[d];
        int y = cy+dy[d];
        if(x>=0&&y>=0&&x<n&&y<m){
            if(!pd[x][y]){
                pd[x][y]=true;
                dfs(pd,x,y);
                pd[x][y]=false;
            }
        }
    }
}
int main(){
    cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    vector<vector<bool>> pd(n,vector<bool>(m,false));
    
    for(int i = 0;i<t;++i){
        int x,y;
        cin>>x>>y;
        pd[x-1][y-1]=true; 
    }
    sx--;sy--;fx--;fy--;
    pd[sx][sy]=true;
    dfs(pd,sx,sy);
    cout<<cnt;
    return 0;
}