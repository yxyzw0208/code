#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,B,h;
    int S=0,n = 0;
    cin>>N>>B;
    vector<int> Hi;
    for(int i =0;i<N;i++){
        cin>>h;
        Hi.push_back(h);
    }
    sort(Hi.begin(),Hi.end(),greater<>());
    for(int i=0;i<N;i++){
       S +=Hi[i];
       n++;
       if(S>=B){
           cout<<n;
           break;
       }
       
    }
}
