//60分
/*
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b){
    return a.size()<b.size();
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<vector<int>> b;
    while(!a.empty()){
        vector<int> temp;
        temp.push_back(a[0]);
        a.erase(a.begin());
        
        while(!a.empty()&&a[0]==temp.back()+1){
            temp.push_back(a[0]);
            a.erase(a.begin());
        }
        b.push_back(temp);
    }
    sort(b.begin(),b.end(),cmp);
    cout<<b[0].size();
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0x3f3f3f3f;
    cin>>n;
    map<int,int> m;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    while(!m.empty()){
        map<int,int>::iterator i = m.begin();
        map<int,int>::iterator j = m.begin();
        (*i).second--;
        int t = 1;
        for(j++;j!=m.end()&&(*j).first==(*i).first+1&&(*j).second>(*i).second;i++,j++){
            t++;
            (*j).second--;
        }
        i = m.begin();
        while(i!=m.end()&&(*i).second==0){
            m.erase((*i++).first);
        }
        if(t<ans){
            ans=t;
        }
    }
    cout<<ans;
    
    
    return 0;
}