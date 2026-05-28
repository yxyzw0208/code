/*该思路得到了90分，但是逻辑上有漏洞：
假设 x = 5，当前 candy[index] = 5，而 candy[index-1] = 2。显然总和 7 大于 5，需要吃掉 2 个。
按你的逻辑：temp1 = 2 + 5 - 5 = 2。然后 candy[index-1] -= 2，此时 candy[index-1] 变成了 0，这是合理的。
但是，如果情况是这样的：candy[index] = 10（在前面的步骤中由于某种原因大于 x，或者初始就大于），candy[index-1] = 0。
temp1 = 0 + 10 - 5 = 5。
candy[index-1] -= 5，此时 candy[index-1] 变成了 -5！
现实中你不可能把一个盒子里的糖果吃成负数，这会导致后续计算完全混乱。

#include<bits/stdc++.h>
using namespace std;
int n,x;
long long cnt;
long long candy[100005];
void eat_l(int index){
    if(index == 0) return;
    long long temp1;
    if(candy[index-1]+candy[index]>x){
        temp1 = candy[index-1]+candy[index]-x;
        candy[index-1]-=temp1;
        cnt+=temp1;
    }
    eat_l(index-1);
}
void eat_r(int index){
    if(index == n+1) return;
    long long temp2;
    if(candy[index+1]+candy[index]>x){
        temp2 = candy[index+1]+candy[index]-x;
        candy[index+1]-=temp2;
        cnt+=temp2;
    }
    eat_r(index+1);
}
int main(){
    cin>>n>>x;
    int index=100005;
    int minn = 1000000005;
    for(int i =1;i<=n;i++){//储存最小
        int temp;
        cin>>temp;
        candy[i] = temp;
        if(minn>temp){
            minn = temp;
            index = i;
        }
        if(minn==temp){
            if(index==0){
                index=i;
            }
        }
    }
    if( candy[index]>x){//处理最小位置
        int temp = candy[index]-x;
        cnt+=temp;
        candy[index] = x;
    }
    eat_l(index);
    eat_r(index);
    cout<<cnt;

    
    return 0;
}
    

*/
//新的方法
#include<bits/stdc++.h>
using namespace std;
int n,x;
long long cnt=0;
int main(){
    cin>>n>>x;
    int candy[100005]={0};
    for(int i =1;i<=n;i++){
        cin>>candy[i];
    }
    for(int i =1;i<=n;i++){
        if(candy[i]+candy[i-1]>x){
            long long temp = candy[i]+candy[i-1]-x;
            candy[i]-=temp;
            cnt+=temp;
        }
    }
    cout<<cnt;
    return 0;
}