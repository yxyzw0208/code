#include<bits/stdc++.h>
using namespace std;


int main(){
    int N;
    int count = 0;
    cin>>N;
    int array[N];
    for(int i =0;i<N;i++){
        cin>>array[i];
    }
    for(int i =0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(array[i]>array[j]) count++;
        }
    }
    cout<<count;
    return 0;


}
