#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    stack<int> res;
    bool b = false;
    int current = 0;
    while(cin>>ch&&ch!='@'){
        if(isdigit(ch)){
            current = current*10+(ch-'0');
            b = true;
        }
        else if(ch=='.'){
            res.push(current);
            current = 0;
            b = false;
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            int x = res.top();
            res.pop();
            int y = res.top();
            res.pop();
            if(ch=='+') res.push(y+x);
            else if(ch=='-') res.push(y-x);
            else if(ch=='*') res.push(y*x);
            else if(ch=='/') res.push(y/x);
        }
    }
    cout<<res.top();
    return 0;
}