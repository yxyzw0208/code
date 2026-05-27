#include<bits/stdc++.h>
using namespace std;
int n,Id=1;
struct p1223
{
    long long time;
    int id;
    p1223(int x){
        this->time = x;
        this->id = Id++;
    }
};

bool cmp(p1223 &a,p1223 &b){
    if(a.time == b.time) return a.id<b.id;
    return a.time<b.time;
}
int main(){
    cin>>n;
    vector<p1223> p;
    for(int i =0;i<n;i++){
        int t;
        cin>>t;
        p.push_back(p1223(t));
    }
    sort(p.begin(),p.end(),cmp);
    
    long long time=0;
    long long current=0;
    for(int i =0;i<n;i++){
        cout<<p[i].id<<" ";
        time+=current;
        current += p[i].time;
    }
    cout<<endl;
    
    
    double result = (double)time/n;
    printf("%.2f",result);

    
    return 0;
}
