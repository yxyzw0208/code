#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0;
    cin>>n;

    queue<pair<long long,vector<int>>> ships;
    int nation[100005] = {0};
    for(int i =0;i<n;++i){
        long long t;
        int k ;
        cin>>t>>k;

        vector<int> crew(k);
        for(int j =0;j<k;++j){
            cin>>crew[j];
        }

        ships.push({t,crew});

        for(auto x:crew){
            if(nation[x]==0)cnt++;
            nation[x]++;
        }
        
        while(!ships.empty()&&t-ships.front().first>=86400){
            auto &old = ships.front();
            for(int x:old.second){
                nation[x]--;
                if(nation[x]==0) cnt--;
            }
            ships.pop();
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}