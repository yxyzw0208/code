//注意处理sum超出int范围
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    vector<int> stone(n+1,0);
    for(int i =1;i<=n;i++){
        cin>>stone[i];
    }
    sort(stone.begin()+1,stone.end());
    int begin = 0;
    int end = n;
    int flag = 0;
    long long sum = 0;
    while(begin<end){
        sum += 1LL*(stone[end]-stone[begin])*(stone[end]-stone[begin]);
        if(flag%2==0){
            begin++;
        }
        else{
            end--;
        }
        flag++;
    }
    cout<<sum;
    return 0;
}