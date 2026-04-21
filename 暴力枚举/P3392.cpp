#include<bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    cin>>n>>m;
    vector<vector<int>> color_cnt(n,vector<int>(3,0));
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        for(char c:s){
            if(c=='W') color_cnt[i][0]++;
            else if(c=='B') color_cnt[i][1]++;
            else if(c=='R') color_cnt[i][2]++;
        }
    }
    int minn = 2500;
    for(int i =0;i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
            int sum=0;
            for(int a =0;a<=i;a++){
                sum+=color_cnt[a][1]+color_cnt[a][2];
            }
            for(int b = i+1;b<=j;b++){
                sum+=color_cnt[b][0]+color_cnt[b][2];
            }
            for(int c = j+1;c<n;c++){
                sum+=color_cnt[c][0]+color_cnt[c][1];
            }
            if(sum<minn) minn=sum; 
        }
    }
    cout<<minn;
    
}