//# P1068 [NOIP 2009 普及组] 分数线划定
//
//## 题目描述
//
//世博会志愿者的选拔工作正在 A 市如火如荼的进行。为了选拔最合适的人才，A 市对所有报名的选手进行了笔试，笔试分数达到面试分//数线的选手方可进入面试。面试分数线根据计划录取人数的 $150\%$ 划定，即如果计划录取 $m$ 名志愿者，则面试分数线为排名第 //$m \times 150\%$（向下取整）名的选手的分数，而最终进入面试的选手为笔试成绩不低于面试分数线的所有选手。
//
//现在就请你编写程序划定面试分数线，并输出所有进入面试的选手的报名号和笔试成绩。
//
//## 输入格式
//
//第一行，两个整数 $n,m(5 \leq n \leq 5000,3 \leq m \leq n)$，中间用一个空格隔开，其中 $n$ 表示报名参加笔试的选手总//数，$m$ 表示计划录取的志愿者人数。输入数据保证 $m \times 150\%$ 向下取整后小于等于 $n$。
//
//第二行到第 $n+1$ 行，每行包括两个整数，中间用一个空格隔开，分别是选手的报名号 $k(1000 \leq k \leq 9999)$和该选手的笔//试成绩 $s(1 \leq s \leq 100)$。数据保证选手的报名号各不相同。
//
//## 输出格式
//
//第一行，有 $2$ 个整数，用一个空格隔开，第一个整数表示面试分数线；第二个整数为进入面试的选手的实际人数。
//
//从第二行开始，每行包含 $2$ 个整数，中间用一个空格隔开，分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输//出，如果成绩相同，则按报名号由小到大的顺序输出。
//
//## 输入输出样例 #1
//
//### 输入 #1
//
//```
//6 3 
//1000 90 
//3239 88 
//2390 95 
//7231 84 
//1005 95 
//1001 88
//```
//
//### 输出 #1
//
//```
//88 5 
//1005 95 
//2390 95 
//1000 90 
//1001 88 
//3239 88 
//```
//
//## 说明/提示
//
//【样例说明】
//
//$m \times 150\% = 3 \times150\% = 4.5$，向下取整后为 $4$。保证 $4$ 个人进入面试的分数线为 $88$，但因为 $88$ 有重//分，所以所有成绩大于等于 $88$ 的选手都可以进入面试，故最终有 $5$ 个人进入面试。
//
//NOIP 2009 普及组 第二题

#include <bits/stdc++.h>
using namespace std;
int number = 0;
struct Candidate{
    int id;
    double score;
    Candidate(int id,double score){
        this->id = id;
        this->score = score;
    }
};
bool cmp(Candidate c1,Candidate c2){
    if(c1.score!=c2.score) return c1.score>c2.score;
    else return c1.id<c2.id;
}
int main(){
    int n,m;
    cin>>n>>m;
    int x = m*1.5;
    if(x>n) exit(0);
    vector<Candidate> candidate;
    for(int i =0;i<n;i++){
        int id;
        double score;
        cin>>id>>score;
        candidate.push_back(Candidate(id,score));
    }
    sort(candidate.begin(),candidate.end(),cmp);
    for(int i=0;i<n;i++){
        if(i>=x){
            if(candidate[i].score!=candidate[i-1].score) break;
        }
        number++;
    }
    cout<<candidate[number-1].score<<" "<<number<<endl;
    for(int i =0;i<number;i++){
        cout<<candidate[i].id<<" "<<candidate[i].score<<endl;
    }
}