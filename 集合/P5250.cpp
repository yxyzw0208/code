#include<bits/stdc++.h>
using namespace std;
set<int> wood;
void Insert(int x){
    if(wood.find(x)!=wood.end()){
        cout<<"Already Exist"<<endl;
    }
    else{
        wood.insert(x);
    }
}
void Pop(int x){
    if(wood.empty()){
        cout<<"Empty"<<endl;
        return;
    }
    auto it = wood.find(x);
    if(it!=wood.end()){
        cout<<*it<<endl;
        wood.erase(it);
        return;
    }
    else{
        auto it2 = wood.lower_bound(x);
        if(it2==wood.begin()){
            cout<<*it2<<endl;
            wood.erase(it2);
            return;
        }
        else if(it2 == wood.end()){
            --it2;
            cout<<*it2<<endl;
            wood.erase(it2);
            return;
        }
        else{
            auto l = it2;
            auto r = it2;
            --r;
            int il = abs(*l-x);
            int ir = abs(*r-x);
            if(ir<=il){
                cout<<*r<<endl;
                wood.erase(r);
                return;
            }
            else{
                cout<<*l<<endl;
                wood.erase(l);
                
                return;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    
    for(int i =0;i<n;++i){
        int op ,x;
        cin>>op>>x;
        if(op==1) Insert(x);
        else{
            Pop(x);
        }
    }
    return 0;
}