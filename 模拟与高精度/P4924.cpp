//# P4924 [1007] 魔法少女小Scarlet
//
//## 题目描述
//
//Scarlet 最近学会了一个数组魔法，她会在 $n\times n$ 二维数组上将一个奇数阶方阵按照顺时针或者逆时针旋转 $90^\circ$。
//
//首先，Scarlet 会把 $1$ 到 $n^2$ 的正整数按照从左往右，从上至下的顺序填入初始的二维数组中，然后她会施放一些简易的魔//法。
//
//Scarlet 既不会什么分块特技，也不会什么 Splay 套 Splay，她现在提供给你她的魔法执行顺序，想让你来告诉她魔法按次执行完毕//后的二维数组。
//
//## 输入格式
//
//第一行两个整数 $n,m$，表示方阵大小和魔法施放次数。
//
//接下来 $m$ 行，每行 $4$ 个整数 $x,y,r,z$，表示在这次魔法中，Scarlet 会把以第 $x$ 行第 $y$ 列为中心的 $2r+1$ 阶矩阵//按照某种时针方向旋转，其中 $z=0$ 表示顺时针，$z=1$ 表示逆时针。
//
//## 输出格式
//
//输出 $n$ 行，每行 $n$ 个用空格隔开的数，表示最终所得的矩阵。
//
//## 输入输出样例 #1
//
//### 输入 #1
//
//```
//5 4
//2 2 1 0
//3 3 1 1
//4 4 1 0
//3 3 2 1
//```
//
//### 输出 #1
//
//```
//5 10 3 18 15
//4 19 8 17 20
//1 14 23 24 25
//6 9 2 7 22
//11 12 13 16 21
//```
//
//## 说明/提示
//
//对于 $50\%$ 的数据，满足 $r=1$；
//
//对于 $100\%$ 的数据，满足 $1\leq n,m\leq500$，$1\leq x-r\leq x+r\leq n$，$1\leq y-r\leq y+r\leq n$。
#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,r,z;
vector<vector<int>> func(vector<vector<int>> &matrix,int x,int y,int r,int z){
    int size =2* r+1;
    vector<vector<int>>temp(size,vector<int>(size));
    for(int i =0;i<size;i++){//辅助矩阵
        for(int j =0;j<size;j++){
            temp[i][j] = matrix[x-1+i-r][y-1+j-r];
        }
    }
    
    if(z == 0){     //顺时针
        for(int i =0;i<size;i++){
        for(int j =0;j<size;j++){
            matrix[x-1+i-r][y-1+j-r] = temp[size-1-j][i];
        }
    }
    }
    else{
        for(int i =0;i<2*r+1;i++){
        for(int j =0;j<2*r+1;j++){
            matrix[x-1+i-r][y-1+j-r] = temp[j][size-1-i];
        }
    }
    }   
    return matrix;
}


int main(){
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(n));
    int a = 1;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            matrix[i][j] = a++;
        }
    }
    for(int i =0;i<m;i++){
        cin>>x>>y>>r>>z;
        func(matrix,x,y,r,z);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}