#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;

void Insert(string name,int score){
    auto it = mp.find(name);
    if(it==mp.end()){
        mp.insert({name,score});
        cout<<"OK"<<endl;
    }
    else{
        it->second = score;
        cout<<"OK"<<endl;
    }
}

void Find(string name){
    auto it = mp.find(name);
    if(it!=mp.end()){
        cout<<it->second<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}

void Delete(string name){
    auto it = mp.find(name);
    if(it!=mp.end()){
        mp.erase(it);
        cout<<"Deleted successfully"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}

void Cnt(){
    int size = mp.size();
    cout<<size<<endl;
}

int main(){
    int q,op,score;
    string name;
    cin>>q;
    
    for(int i =0;i<q;++i){
        cin>>op;
        if(op==1){
            cin>>name>>score;
            Insert(name,score);
        }
        else if(op==2){
            cin>>name;
            Find(name);
        }
        else if(op==3){
            cin>>name;
            Delete(name);
        }
        else if(op==4){
            Cnt();
        }

    }
    return 0;
}