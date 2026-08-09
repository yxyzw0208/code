//未考虑边界连续-80
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int dx[4]={1,0,0,-1};
//int dy[4]={0,1,-1,0};
//
//int main(){
//    cin>>n;
//    vector<vector<int>>ma(n,vector<int>(n,0));
//    
//    for(int i =0;i<n;++i){
//        for(int j =0;j<n;++j){
//            cin>>ma[i][j];
//        }
//    }
//    for(int i =0;i<n;++i){
//        for(int j =0;j<n;++j){
//            if(ma[i][j]==1) continue;
//            bool up=false,down=false,left=false,right=false;
//            for(int y = j-1;y>=0;--y){
//                if(ma[i][y]==1) left = true;
//            }
//            for(int y = j+1;y<n;++y){
//                if(ma[i][y]==1) right = true;
//            }
//            for(int x = i-1;x>=0;--x){
//                if(ma[x][j]==1) up = true;
//            }
//            for(int x = i+1;x<n;++x){
//                if(ma[x][j]==1) down = true;
//            }
//            if(up&&down&&left&&right){
//                ma[i][j]=2;
//            }
//        }
//    }
//    for(int i =0;i<n;++i){
//        for(int j =0;j<n;++j){
//            cout<<ma[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int n;
int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};

int main(){
    cin>>n;
    vector<vector<int>>ma(n,vector<int>(n,0));
    
    for(int i =0;i<n;++i){
        for(int j =0;j<n;++j){
            cin>>ma[i][j];
        }
    }
    queue<pair<int,int>>q;
    for(int i =0;i<n;++i){
        for(int j =0;j<n;++j){
            if((i==0||i==n-1||j==0||j==n-1)&&ma[i][j]==0){
                ma[i][j]=3;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();
        for(int k =0;k<4;k++){
            int nx = x+dx[k];
            int ny = y+dy[k];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&ma[nx][ny]==0){
                ma[nx][ny]=3;
                q.push({nx,ny});
            }
        }
    }
    for(int i =0;i<n;++i){
        for(int j =0;j<n;++j){
            if(ma[i][j]==3)cout<<0<<" ";
            else if(ma[i][j]==0)cout<<2<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;

    }
    return 0;
}