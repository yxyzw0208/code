//数据过大会超时
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int n,m;
//    cin>>n;
//
//    vector<int> id(1,1);
//    for(int i =2;i<=n;++i){
//        int k,p;
//        cin>>k>>p;
//        int index;
//        for(int j =0;j<id.size();++j){
//            if(id[j]==k){
//                index=j;
//                break;
//            }
//        }
//        if(p==0){
//            id.insert(id.begin()+index,i);
//        }
//        else{
//            id.insert(id.begin()+index+1,i);
//        }
//    }
//    
//    cin>>m;
//    for(int i = 0;i<m;++i){
//        int x;
//        cin>>x;
//        for(int j =0;j<id.size();++j){
//            if(id[j]==x){
//                id.erase(id.begin()+j);
//            }
//        }
//    }
//    for(int i =0;i<id.size();++i){
//        cout<<id[i]<<" ";
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
int n,m;
struct S{
    int id;
    int l,r;
}s[mx]={0};
void add(int i,int k,int p){
    if(p==0){
        s[i].l = s[k].l;
        s[s[k].l].r = i;
        s[k].l = i;
        s[i].r = k;
    }
    else{
        s[s[k].r].l = i;
        s[i].r = s[k].r;
        s[k].r = i;
        s[i].l = k;
    }
}
int main(){
    cin>>n;
    for(int i =2;i<=n;i++){
        int k,p;
        cin>>k>>p;
        add(i,k,p);
    }
    cin>>m;while(m--){
        int x;
        cin>>x;
        s[x].id = 1;
    }
    for(int i = s[0].r;i;i=s[i].r){
        if(s[i].id==0){
            cout<<i<<" ";
        }
    }
    return 0;
}