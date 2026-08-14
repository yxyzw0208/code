#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>>n;
    int m = (int)pow(2,n);
    
    queue<pair<int,int>> c;
    for(int i =1;i<=m;i++){
        int power;
        cin>>power;
        c.push({i,power});
    }
    for(int i =n;i>0;i--){
        if(i==1){
            pair<int,int> f = c.front();c.pop();
            pair<int,int> s = c.front();c.pop();
            if(f.second>s.second){
                cout<<s.first;
            }
            else cout<<f.first;
        }
        queue<pair<int,int>> temp;
        while(c.size()!=0){
            pair<int,int> f = c.front();c.pop();
            pair<int,int> s = c.front();c.pop();
            if(f.second>s.second){
                temp.push(f);
            }
            else temp.push(s);
        }
        c = temp;
    }
    return 0;
}