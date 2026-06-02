/*哈希表做法，容易被卡超时

#include<bits/stdc++.h>
using namespace std;
int n,c;
long long ans=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>c;
    unordered_map<int,long long> num;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        num[temp]++;
    }

    for(auto &p:num){
        long long A = p.first+c;
        auto it = num.find(A);
        if(it!=num.end()){
            ans+=it->second*p.second;
        }
    }
    
    cout<<ans;
    return 0;
}
*/
//二分
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//typedef long long ll;
//ll c,ans = 0,a[200005];
//int main(){
//    cin>>n>>c;
//    for(int i =1;i<=n;i++){
//        cin>>a[i];
//    }
//    sort(a+1,a+1+n);
//    for(int i =1;i<=n;i++){
//        ll A = a[i]+c;
//        auto left = lower_bound(a+1,a+1+n,A);
//        auto right = upper_bound(a+1,a+1+n,A);
//        ans+=right-left;
//    }
//    cout<<ans;
//    return 0;
//}
//洛谷题解
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,a[200005];
    ll c,ans=0;
    map<int,ll> map;
    cin>>n>>c;
    for(int i =1;i<=n;i++){
        cin>>a[i];
        map[a[i]]++;
        a[i]-=c;//把a[]改为寻找的数
    }
    for(int i =1;i<=n;i++){
        ans+=map[a[i]];
    }
    cout<<ans;
    
    return 0;
}