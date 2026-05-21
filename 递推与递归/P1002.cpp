#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;//B点(n,m),马(x,y)
long long mem[25][25];
long long step(int ni,int mi){
    if(ni < 0 || mi < 0||ni>n||mi>m){
        return 0;
    }
    if((ni==x-1&&mi==y+2)||(ni==x+1&&mi==y-2)||
    (ni==x-1&&mi==y-2)||(ni==x+1&&mi==y+2)||
    (ni==x-2&&mi==y+1)||(ni==x+2&&mi==y-1)||
    (ni==x-2&&mi==y-1)||(ni==x+2&&mi==y+1)||(ni==x&&mi==y)){
        return 0;
    }
    if(ni==n&&mi==m){
        return 1;
    }
    if(mem[ni][mi]!=-1) return mem[ni][mi];
    mem[ni][mi]=step(ni+1,mi)+step(ni,mi+1);
    return mem[ni][mi];
}
int main(){
    memset(mem,-1,sizeof(mem));
    cin>>n>>m>>x>>y;
    cout<<step(0,0);
    return 0;
}