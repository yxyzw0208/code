#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin>>a>>b>>c;
    if(a==0) cout<<"No!!!";//容易漏掉 
    else{
        vector<vector<int>> ans;
    for(int i = 123;i<=987;i++){
        vector<int> number;
        int A = i;
        if(A % a != 0) continue;
        int B = A/a*b;
        int C = A/a*c;
        if(B < 100 || B > 999 || C < 100 || C > 999) continue;
        int x = A,y=B,z=C;
        for(int j =0;j<3;j++){
            number.push_back(x % 10);
            number.push_back(y % 10);
            number.push_back(z % 10);
            x /= 10;
            y /= 10;
            z /= 10;
        }
        sort(number.begin(),number.end());
        int flag = 1;
        for(int j =0;j<9;j++){
            if(number[j]!=j+1){
                flag = 0;
                break;
            }
        }
        if(flag){
            ans.push_back({A,B,C});
        }

    }
    if(ans.empty()) cout<<"No!!!";
    else{
        for(int i =0;i<ans.size();i++){
            for(int j =0;j<3;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    }
    
}