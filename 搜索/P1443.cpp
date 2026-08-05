#include<bits/stdc++.h>
using namespace std;

void func(vector<vector<int>>&p,int n,int m){

}
int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<vector<int>>p(n,vector<int> (m,-1));
    p[x-1][y-1]=0;
    int dx[8] = {1,1,2,2,-1,-1,-2,-2};
    int dy[8] = {2,-2,1,-1,2,-2,1,-1};

    for(int k = 0;k<max(n,m);k++){
        for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(p[i][j]==-1) continue;
            for(int d = 0;d<8;d++){
                int x = i+dx[d];
                int y = j+dy[d];
                if(x>=0&&y>=0&&x<n&&y<m){
                    if(p[x][y]==-1) p[x][y]=p[i][j]+1;
                    else p[x][y] = min(p[x][y],p[i][j]+1);
                }
            }
        }
    }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<p[i][j]<<" " ;
        }
        cout<<"\n";
    }
    
    return 0;
}