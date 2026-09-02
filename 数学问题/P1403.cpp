//#include<bits/stdc++.h>
//using namespace std;
//int find(int x){
//    int cnt=0;
//    for(int i =1;i*i<=x;++i){
//        if(x%i==0){
//            if(i*i==x) cnt++;
//            else cnt+=2;
//        }
//    }
//    return cnt;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    vector<int> f(n+1);
//    vector<int> res(n+1,0);
//    for(int i =1;i<=n;++i){
//        f[i]=find(i);
//        res[i]=res[i-1]+f[i];
//    }
//    cout<<res[n];
//    
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> f(n+1,0);
    for(int i = 1;i<=n;++i){
        for(int j =i;j<=n;j+=i){
            f[j]++;
        }
    }
    int ans = 0;
    for(int i = 1;i<=n;++i){
        ans+=f[i];
    }
    cout<<ans;
    return 0;
}