#include<bits/stdc++.h>
using namespace std;
int Id = 1;
struct Candidate{
    int id;
    string count;
    Candidate(string count){
        this->id = Id++;
        this->count = count;
    }
};
bool cmp(Candidate &c1,Candidate &c2){
    if(c1.count.size()>c2.count.size()) return true;
    else if(c1.count.size()==c2.count.size()) {
        if(c1.count>c2.count) return true;
        else return false;
    }
    else return false;
}

int main(){
    int n;
    string m;

    cin>>n;
    if(n<1||n>20) exit(0);
    vector<Candidate> candidate;
    for(int i =0;i<n;i++){
        cin>>m;
        candidate.push_back((m));
    }
    sort(candidate.begin(),candidate.end(),cmp);
    cout<<candidate[0].id<<endl;
    cout<<candidate[0].count;
    return 0;
}