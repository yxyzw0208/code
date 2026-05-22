#include<bits/stdc++.h>
using namespace std;
long long a,b,c,f[25][25][25];
long long w(long long x,long long y,long long z){

    if(x<=0||y<=0||z<=0) return 1;
    if(x>20||y>20||z>20) return w(20,20,20);

    if(f[x][y][z]!=0) return f[x][y][z];//查找记忆

    if(x<y&&y<z) {
        f[x][y][z] =  w(x,y,z-1)+w(x,y-1,z-1)-w(x,y-1,z);
    }
    else{
        f[x][y][z] = w(x-1,y,z)+w(x-1,y-1,z)+w(x-1,y,z-1)-w(x-1,y-1,z-1);
        
    }
    return f[x][y][z];
}
int main(){
    cin>>a>>b>>c;
    while(!(a==-1&&b==-1&&c==-1)){
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
        cin>>a>>b>>c;
    }
    return 0;
}