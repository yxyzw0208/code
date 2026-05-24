/*回溯超时
#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005],cnt=0;
vector<int> choose;
vector<vector<int>> record;
void backtrack(int index,int sum,vector<int> &choose){
    if(sum==m){
        cnt++;
        record.push_back(choose);
        return ;
    }
    for(int i = index;i<n;i++){
        choose.push_back(a[i]);
        backtrack(i+1,sum+a[i],choose);
        choose.pop_back();
    }
}
int main(){
    cin>>n>>m;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    backtrack(0,0,choose);
    cout<<cnt;
    return 0;
}*/
//一维背包问题
#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005],b[1005];
int main(){
    cin>>n>>m;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    b[0] = 1;//没选择菜的情况
    for(int i =0;i<n;i++){
        for(int j =m;j>a[i];j--){
            b[j] =b[j-a[i]]+b[j];//累加
        }
    }
    cout<<b[m];
    
    return 0;
}