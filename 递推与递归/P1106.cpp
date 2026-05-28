#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k;
    cin>>s>>k;
    vector<char> v;
    for(char c:s) v.push_back(c);

    for(int i =0;i<k;i++){
        bool flag = false;
        for(int j =0;j<v.size()-1;j++){
            if(v[j]>v[j+1]){
                v.erase(v.begin()+j);
                flag = true;
                break;
            }
        }
        if(!flag) v.pop_back();

    }
    while(!v.empty()&&v[0]=='0'){
        v.erase(v.begin());
    }
    if(v.empty()) cout<<0;
    else{
        for(char c:v){
            cout<<c;
        }
    }
    return 0;
}