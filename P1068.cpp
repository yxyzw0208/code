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
int main(){
    int n,m;
    cin>>n>>m;
    if(m*1.5>n) exit(0);
    
}