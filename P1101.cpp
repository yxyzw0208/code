#include<bits/stdc++.h>
using namespace std;
int n;
string word = "yizhong";
int main(){
    cin>>n;
    vector<string> s(n);
    for(int i =0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<char>> ans(n,vector<char>(n,'*'));
    int dx[8]={0,0,1,-1,1,1,-1,-1};
    int dy[8]={1,-1,0,0,1,-1,1,-1};
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(s[i][j]!='y') continue;
            for(int d =0;d<8;d++){//每个方向
                bool ok = true;

                for(int k = 0;k<7;k++){
                    int x = i+dx[d]*k;
                    int y = j+dy[d]*k;
                    if(x<0||y<0||x>=n||y>=n||s[x][y]!=word[k]){
                        ok = false;//是否满足单词
                        break;
                    }
                }
                if(ok){
                    for (int k = 0; k < 7; k++) {
                        int x = i + dx[d] * k;
                        int y = j + dy[d] * k;
                        ans[x][y] = word[k];
                    }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j];
        }
        cout << '\n';
    }
}