#include<bits/stdc++.h>
using namespace std;
int Id =1;
struct student{
    int id ;
    int ch,ma,en,sum;
    student(){};
    student(int ch,int ma,int en){
        this->id = Id++;
        this->ch = ch;
        this->ma = ma;
        this->en = en;
        this->sum = ch+ma+en;
    }
};
bool cmp(const student&a,const student&b){
    if(a.sum!=b.sum) return a.sum>b.sum;
    else return a.ch>b.ch;
}

int main(){
    int n;
    cin>>n;
    int i,ch,ma,en;
    vector<student> s(n);
    for(i =0;i<n;i++){
        cin>>ch>>ma>>en;
        s[i]=student(ch,ma,en);
    }
    sort(s.begin(),s.end(),cmp);
    int num = 1;
    for(auto &element:s){
        if(num>5) break;
        cout<<element.id<<" "<<element.sum<<endl;
        num++;
    }
}