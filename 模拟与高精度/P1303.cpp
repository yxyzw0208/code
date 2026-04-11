//# P1303 A*B Problem
//
//## 题目背景
//
//高精度乘法模板题。
//
//## 题目描述
//
//给出两个非负整数，求它们的乘积。
//
//## 输入格式
//
//输入共两行，每行一个非负整数。
//
//## 输出格式
//
//输出一个非负整数表示乘积。
//
//## 输入输出样例 #1
//
//### 输入 #1
//
//```
//1 
//2
//```
//
//### 输出 #1
//
//```
//2
//```
//
//## 说明/提示
//
//每个非负整数不超过 $10^{2000}$。
#include<bits/stdc++.h>
using namespace std;
int a[2003]={0},b[2003]={0},c[5000]={0};
string A,B;
int main(){
    cin>>A>>B;
    int la = A.size();
    int lb = B.size();
    for(int i =1;i<=la;i++){
        a[i] = A[la-i]-'0';
    }
    for(int i =1;i<=lb;i++){
        b[i] = B[lb-i]-'0';
    }

    for(int i =1;i<=la;i++){
        for(int j = 1;j<=lb;j++){
            c[i+j-1] += a[i]*b[j];
            c[i+j] += c[i+j-1]/10;
            c[i+j-1] %=10;
        }
    }
    int l = la+lb;
    while(l>1&&c[l]==0) l--;
    for(int i =l;i>=1;i--){
        cout<<c[i];
    }
    
    
}