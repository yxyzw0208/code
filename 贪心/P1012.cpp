#include<bits/stdc++.h>
using namespace std;
vector<string> num;
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        string ch;
        cin>>ch;
        num.push_back(ch);
    }
    sort(num.begin(),num.end(),[](string a,string b){
    return a+b > b+a;
});
    for(int i =0;i<n;i++){
        cout<<num[i];
    }
    
    return 0;
}