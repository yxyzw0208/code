//递归算法，但是添加的测试样例超时
//#include<bits/stdc++.h>
//using namespace std;
//int n,cnt=0;
//void f(int begin,int end,vector<int> &deepth){
//    if(begin>end) return;
//    int min_index = min_element(deepth.begin()//+begin,deepth.begin()+end+1)-deepth.begin();
//    if(deepth[min_index]==0) return; 
//    int minn = deepth[min_index];
//    cnt+= minn;
//    for(int i =begin;i<=end;i++){
//        deepth[i]-=minn;
//    }
//    
//    int l = begin;
//    for(int i = begin;i<=end;i++){
//        if(deepth[i]==0){
//            if(l<=i-1) f(l,i-1,deepth);
//            l=i+1;
//        }
//
//    }
//    if(l<=end) f(l,end,deepth);
//
//}
//int main(){
//    cin>>n;
//    vector<int> deepth(n,0);
//    for(int i =0;i<n;i++){
//        cin>>deepth[i];
//    }
//    int begin = 0;
//    int end = n-1;
//    f(begin,end,deepth);
//    cout<<cnt;
//    
//    return 0;
//}

//贪心算法
#include<bits/stdc++.h>
using namespace std;
int n,deepth[100005],cnt=0;
int main(){
    cin>>n;
    for(int i =1;i<=n;i++){
        cin>>deepth[i];
    }
    for(int i =2;i<=n;i++){
        if(deepth[i]>deepth[i-1]) {
            cnt+=deepth[i]-deepth[i-1];
        }

    }
    cout<<cnt+deepth[1];
    
    return 0;
}