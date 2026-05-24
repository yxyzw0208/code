#include<bits/stdc++.h>
using namespace std;

string press(){
    int k;
    char ch;
    string s="",str="";

    while(cin>>ch){
        if(ch=='['){
            cin>>k;
            str=press();
            while(k--){
                s+=str;
            }
        }
        else if(ch==']'){
            return s;
        }
        else{
            s+=ch;
        }
    }
    return s;
}

int main(){
    
    cout<<press();
    return 0;
}