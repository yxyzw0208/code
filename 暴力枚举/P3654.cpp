#include<bits/stdc++.h>
using namespace std;
int R,C,K;
int main(){
    cin>>R>>C>>K;
    vector<vector<char>> ground(R, vector<char>(C));
    for(int i =0;i<R;i++){
        for(int j =0;j<C;j++){
            cin>>ground[i][j];
        }
    }
    int cnt = 0;
    if(K!=1){
        for(int a =0;a<R;a++){
        for(int b =0;b<C;b++){
            int flag = 1;
            for(int c =0;c<K;c++){
                //横着寻找
                if(b+c>=C||ground[a][b+c]!='.'){
                    flag = 0;
                    break;
                }
            }
            if(flag) cnt++;
            
            flag = 1;
            for(int c =0;c<K;c++){
                //竖着寻找
                if(a+c>=R||ground[a+c][b]!='.'){
                   flag = 0;
                   break;
                }
                
            }
            if(flag) cnt++;
        }
    }
    }
    else{//k<=1的情况！！！！
        for(int i =0;i<R;i++){
            for(int j =0;j<C;j++){
                if(ground[i][j]=='.') cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}