//# P5143 攀爬者
//
//## 题目背景
//
//HKE 考完 GDOI 之后跟他的神犇小伙伴们一起去爬山。
//
//## 题目描述
//
//HKE 在地形图上标记了 $N$ 个点，每个点 $P_i$ 都有一个坐标 $(x_i,y_i,z_i)$，且在所有点对中，高度值 $z$ 不会相等。HKE //准备从最低的点爬到最高的点，他的攀爬满足以下条件：
//
//1. 经过他标记的每一个点；
//2. 从第二个点开始，他经过的每一个点高度 $z$ 都比上一个点高；
//3. HKE 会飞，他从一个点 $P_i$ 爬到 $P_j$ 的距离为两个点的欧几里得距离，即 $\sqrt{(X_i-X_j)^2+(Y_i-Y_j)^2//+(Z_i-Z_j)^2}$。
//
//现在，HKE 希望你能求出他攀爬的总距离。
//
//## 输入格式
//
//第一行，一个整数 $N$ 表示地图上的点数。
//
//接下来 $N$ 行，每行三个整数 $x_i,y_i,z_i$，表示第 $i$ 个点的坐标。
//
//## 输出格式
//
//一个实数，表示 HKE 需要攀爬的总距离（保留三位小数）。
//
//## 输入输出样例 #1
//
//### 输入 #1
//
//```
//5
//2 2 2
//1 1 1
//4 4 4
//3 3 3
//5 5 5
//
//```
//
//### 输出 #1
//
//```
//6.928
//```
//
//## 说明/提示
//
//对于 $100\%$ 的数据，$1\leq N\leq 50000$，答案在 `double` 类型的表示范围内。
#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x,y,z;
    Point(int x,int y,int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

};
bool cmp(Point p1,Point p2){
    return p1.z<p2.z;//低的在前
}
double Distance(Point p1,Point p2){
    int x = pow(p1.x-p2.x,2);
    int y = pow(p1.y-p2.y,2);
    int z = pow(p1.z-p2.z,2);
    return (double)sqrt(x+y+z);
}
int main(){
    int n;
    cin>>n;
    vector<Point> point;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        point.push_back(Point(x,y,z));
    }
    sort(point.begin(),point.end(),cmp);
    double distance = 0.0;
    for(int i=0;i<n-1;i++){
        distance+=Distance(point[i],point[i+1]);
    }
    printf("%.3f",distance);
}
