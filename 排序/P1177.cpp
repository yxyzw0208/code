#include <iostream>//快速排序
#include <vector>
#include <algorithm>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> array(n);
    for(int i =0;i<n;i++){
        std::cin>>array[i];
    }
    sort(array.begin(),array.end());
    for(int element:array){
        std::cout<<element<<" ";
    }
    return 0;

}
