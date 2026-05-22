/*超时
#include<bits/stdc++.h>
using namespace std;
long long n,cnt=0;
void pd(vector<int> num){
    int size = num.size();
    if(size==1){
        cnt++;
        return;
    }
    if(num[size-2]/2>=num[size-1]) cnt++;
    return;
}
void cmpt(vector<int> &num){
    pd(num);
    int last = num.back();
    for(int i = last/2;i>=1;i--){
        num.push_back(i);
        cmpt(num);
        num.pop_back();
    }
}
int main(){
    vector<int> num;
    cin>>n;
    num.push_back(n);
    cmpt(num);
    cout<<cnt;
    
    return 0;
*/
/*#include<bits/stdc++.h>
using namespace std;
int n;
vector<long long> dp;//记忆数组，记录n形成的序列数
long long cmp(int n){
    if(n==1) return 1;
    if(dp[n]!=0) return dp[n];
    long long temp=0 ;
    for(int i =n/2;i>0;i--){
        temp+=cmp(i);
    }
    dp[n] = temp+1;
    return dp[n];
}
int main(){
    cin>>n;
    dp.resize(n+1);
    cout<<cmp(n);
    return 0;
}*/
//学习的题解
#include<bits/stdc++.h>
using namespace std;
int n,f[1005];
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i/2;j++){
            f[i]+=f[j];
        }
        f[i]++;
    }
    cout<<f[n];
    return 0;
}