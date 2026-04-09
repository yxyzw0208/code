//P1104 生日
//
// 题目描述
//
//f 君想调查学校 OI 组每个同学的生日，并按照年龄从大到小的顺序排序。但 cjf 君最近作业很多，没有时间，所以请你帮她排//。
//
// 输入格式
//
//入共有 $n + 1$ 行，
//
// $1$ 行为 OI 组总人数 $n$；
//
// $2$ 行至第 $n+1$ 行分别是每人的姓名 $s$、出生年 $y$、月 $m$、日 $d$。
//
// 输出格式
//
//出共有 $n$ 行，即 $n$ 个年龄从大到小同学的姓名（如果有两个同学年龄相同，输入靠后的同学先输出）。
//
// 输入输出样例 #1
//
//# 输入 #1
//
//`
//
//ngchu 1992 4 23
//ujingya 1993 10 13
//owen 1991 8 1
//
//`
//
//# 输出 #1
//
//`
//owen
//ngchu
//ujingya
//
//`
//
// 说明/提示
//
//据保证，$1<n<100$，$1\leq |s|<20$。保证年月日实际存在，且年份 $\in [1960,2020]$。
#include<bits/stdc++.h>
using namespace std;
int Id = 1;
struct Student{
    string s;
    int y,m,d,id;
    Student(string s,int y,int m,int d):s(s),y(y),m(m),d(d),id(Id++){};
};
bool cmp(const Student &s1,const Student &s2){
    if(s1.y!=s2.y) return s1.y<s2.y;
    else{
        if(s1.m!=s2.m) return s1.m<s2.m;
        else {
            if(s1.d!=s2.d) return s1.d<s2.d;
            else return s1.id>s2.id;//确保后输入先输出
        }
    }
}
int main(){
    int n;
    cin>>n;

    vector<Student> student;
    for(int i=0;i<n;i++){
        string s;
        int y,m,d;
        cin>>s>>y>>m>>d;
        student.push_back(Student(s,y,m,d));
    }

    sort(student.begin(),student.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<student[i].s<<endl;
    }
}
