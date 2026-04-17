#include<bits/stdc++.h>
using namespace std;
int n,m;
long long num_z,num_c;

int main(){
    cin>>n>>m;
    num_z =0,num_c=0;
    int k = min(n,m);
    for(int i =0;i<k;i++){
        num_z+=(n-i)*(m-i);
    }
    num_c = (long long)(n+1)*n/2*(m+1)*m/2-num_z;
    cout<<num_z<<" "<<num_c;
}