#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2505],b[2505],ans[2505];

void add(){
    a[1] = 1;
    b[1] = 2;
    m =1;
    for(int i =3;i<=n;i++){
        for(int j =1;j<=m;j++){
            ans[j] = a[j]+b[j];//递推相加
        }
        for(int j =1;j<=m;j++){
            if(ans[j]>9){//处理进位
                ans[j]-=10;
                ans[j+1]+=1;
                if(j==m) m++;
            }
        }
        for(int j =1;j<=m;j++){
            a[j] = b[j];
            b[j] = ans[j];
        }
    }
}
int main(){    
    cin>>n;
    if(n<3){
        cout<<n;
        return 0;
    }
    add();
    for(int i = m;i>0;--i){
        cout<<ans[i];
    }
}