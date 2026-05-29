#include<bits/stdc++.h>
using namespace std;
int n;
struct comp{
    int begin;
    int end;
    int con;
    comp(int a,int b){
        begin = a;
        end = b;
        con = b-a;
    }
};
bool cmp(comp &a,comp &b){//结束，持续时间升序
    if(a.end==b.end){
        return a.con<b.con;
    }
    return a.end<b.end;
}
int main(){
    cin>>n;
    vector<comp> cm;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cm.push_back(comp(a,b));
    }
    sort(cm.begin(),cm.end(),cmp);
    int time = cm[0].end;
    int cnt = 1;
    for(int i =1;i<n;i++){
        if(cm[i].begin>=time){
            time = cm[i].end;
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}