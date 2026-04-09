#include<bits/stdc++.h>
int Array[5000001];
//long long n,k;
//long long array[5000001];
//void func(long long left,long long right){
//    if(left>right) return;
//    long long mid = array[left];
//    std::vector<long long> s,b;
//    for(long long i = left+1;i<=right;i++){
//        if(array[i]<mid) s.push_back(array[i]);
//        else b.push_back(array[i]);
//    }
//    for(long long i = left;i<left+s.size();i++){
//        array[i] = s[i-left];
//    }
//    array[left+s.size()] = mid;
//    for(long long i =left+s.size()+1;i<=right;i++){
//        array[i] = b[i-left-s.size()-1];
//    }
//    if(k<s.size()+1){
//        func(left,left+s.size()-1);
//    }
//    else if(k==s.size()+1){
//        std::cout<<mid;
//        exit(0);
//    }
//    else{
//        k-=s.size()+1;
//        func(left+s.size()+1,right);
//    }
//
//}
int main(){
    //std::cin>>n>>k;
    //long long num;
    //for(int i =0;i<n;i++){
    //    std::cin>>array[i];
    //}
    //k+=1;
    //func(1,n);
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i =0;i<n;i++){
        scanf("%d",&Array[i]);
    }
    std::sort(Array,Array+n);
    printf("%d",Array[k]);


}