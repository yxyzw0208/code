#include<bits/stdc++.h>
using namespace std;

int main(){
    char op;
    unordered_map<string,string> relation;
    string father;
    while(cin>>op&&op!='$'){
        string name;
        cin>>name;
        if(op=='#'){
            father = name;
        }
        else if(op=='+'){
            relation[name]=father;
        }
        else if(op=='?'){
            string t = name;
            while(relation.count(t)){
                t = relation[t];
            }
            cout<<name<<" "<<t<<endl;
        }
    }
    
    return 0;
}