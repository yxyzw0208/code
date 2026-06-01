//52分，一半的样例超时
//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin>>n>>m;
//    vector<int> num(n+1,0);
//    for(int i =1;i<=n;i++){
//        cin>>num[i];
//    }
//    for(int i =0;i<m;i++){
//        int temp;
//        cin>>temp;
//        auto it = find(num.begin(),num.end(),temp);
//        if(it!=num.end()){
//            cout<<it-num.begin()<<" ";
//        }
//        else{
//            cout<<-1<<" ";
//        }
//
//    }
//    return 0;
//}
//二分查找

#include<bits/stdc++.h>
using namespace std;
int n,m;
int bs(int *num,int n,int find){
    int l =0,r=n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(num[mid]==find){
            ans = mid;
            r=mid-1;
        }
        else if(num[mid]<find){
            l = mid+1;
        }
        else r = mid-1;
    }
    return ans==-1?-1:ans+1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    int num[n];
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    for(int i =0;i<m;i++){
        int temp;
        cin>>temp;
        cout<<bs(num,n,temp)<<" ";
    }
    return 0;
}
