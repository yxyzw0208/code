#include<bits/stdc++.h>
using namespace std;
int N,Na,Nb,score_a,score_b;
int win[5][5]={{0,-1,1,1,-1},
               {1,0,-1,1,1},
               {-1,1,0,-1,1},
               {-1,-1,1,0,1},
               {1,1,-1,-1,0}};
int main(){
    score_a=0;
    score_b=0;
    cin>>N>>Na>>Nb;
    vector <int>Ta(Na);
    vector <int>Tb(Nb);
    for(int i=0;i<Na;i++){
        cin>>Ta[i];
    }
    for(int i=0;i<Nb;i++){
        cin>>Tb[i];
    }
    for(int i =0;i<N;i++){
        int k = win[Ta[i%Na]][Tb[i%Nb]];
        if(k==-1) score_b+=1;
        if(k==1) score_a+=1;
    }
    cout<<score_a<<" "<<score_b;
}