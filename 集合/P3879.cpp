#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<set<string>> dic(n);
    for(int i =0;i<n;++i){
        int l;
        cin>>l;
        for (int k = 0; k < l; ++k) {
            string word;
            cin >> word;
            dic[i].insert(word);
        }
    }
    int m;
    cin>>m;
    for(int i =0;i<m;++i){
        string tar;
        cin>>tar;
        for(int j = 0;j<n;++j){
            if(dic[j].count(tar)){
                cout<<j+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}