#include<bits/stdc++.h>
using namespace std;
struct apple{
    int x;//高度
    int y;//消耗力气
    apple(int x,int y):x(x),y(y){}
};
bool cmp(apple &a,apple &b){
    return a.y<b.y;
}
int main(){
    int n,s,a,b,cnt=0;
    cin>>n>>s>>a>>b;
    vector<apple> app;
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x<=a+b){
            app.push_back(apple(x,y));
        }
    }
    sort(app.begin(),app.end(),cmp);
    int sum=0;
    for(int i =0;i<app.size();i++){
        sum+=app[i].y;
        if(sum>s) break;
        cnt++;
    }
    cout<<cnt;
    return 0;
}