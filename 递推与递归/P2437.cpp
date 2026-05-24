//需要高精度
#include<bits/stdc++.h>
using namespace std;
int n,m,x,z;
int a[1005],b[1005],ans[1005];
void add(){
    a[1] = 1;
    b[1] = 1;
    z = 1;
    for(int i = 2;i<=x;i++){//每层遍历
        for(int j =1;j<=z;j++){
            ans[j] = a[j]+b[j];//每位相加
        }
        for(int j =1;j<=z;j++){
            if(ans[j]>9){//进位
                ans[j]%=10;
                ans[j+1]+=1;
                if(j==z) z++;
            }
        }
        for(int j = 1;j<=z;j++){//递推
            a[j] = b[j];
            b[j] = ans[j];
        }
    }
}
int main(){
    cin>>m>>n;
    x = n-m;
    add();
    for(int i =z;i>0;i--){
        cout<<ans[i];
    }
    
    return 0;
}