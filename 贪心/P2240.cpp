#include<bits/stdc++.h>
using namespace std;
int n;
float t;

int m[1005],v[1005];
float s[1005];//总重量，总价值，单位价值
void swap(){
    int temp1;
    float temp2;
    for(int i =1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            if(s[j]>s[i]){
                temp2 = s[j];
                s[j] = s[i];
                s[i] = temp2;
                temp1 = m[j];
                m[j] = m[i];
                m[i] = temp1;
                temp1 = v[j];
                v[j] = v[i];
                v[i] = temp1;
            }
        }
    }
}
int main(){
    cin>>n>>t;
    float sum = 0;
    float sum_t=0;
    for(int i =1;i<=n;i++){
        cin>>m[i]>>v[i];
        s[i] = (float)v[i]/m[i];
    }
    swap();
    for(int i =1;i<=n;i++){
        if(sum_t==t) break;
        float rest = t-sum_t;
        if(rest>=m[i]){
            sum+=v[i];
            sum_t+=m[i];
        }
        else{
            sum_t+=rest;
            sum+=rest*s[i];
        }
    }

    printf("%.2f",sum);


    return 0;
}