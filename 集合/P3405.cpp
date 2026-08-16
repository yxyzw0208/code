#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    string s1,s2;
    unordered_map<string,int> mp;
    for(int i =0;i<n;++i){
        cin>>s1>>s2;
        string s = s1.substr(0,2);
        if(s == s2) continue;
        cnt+=mp[s+s2];
        mp[s2+s]++;
    }
    cout<<cnt;
    return 0;
}