#include <bits/stdc++.h>
using namespace std;
int main(){
    //法I：
    //int n;
    //cin>>n;
    //vector<int> num(n);
    //
    //for(int i =0;i<n;i++){
    //    cin>>num[i];
    //}
    //unordered_map<int,int> table;
    //int count=0;
    //for(int i =0;i<n;i++){
    //    auto it = table.find(num[i]);
    //    if(it!=table.end()){
    //        continue;
    //    }
    //    table[num[i]] = 1;
    //    count++;
    //}
    //cout<<count<<endl;
    //int i =0;
    //int a[count];
    //for (auto& pair : table) {
    //    a[i++] = pair.first;
    //}
    //sort(a,a+count);
    //for(int j =0;j<i;j++){
    //    cout<<a[j]<<" ";
    //}
    //法Ⅱ:
    int n,number;
    cin>>n;
    set<int> st;
    for(int i =0;i<n;i++){
        cin>>number;
        st.insert(number);
    }
    cout<<st.size()<<endl;
    for(int num:st){
        cout<<num<<" ";
    }
}