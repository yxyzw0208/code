#include<bits/stdc++.h>
using namespace std;

// 定义足够大的数组来存放数字的每一位
// a用来存放当前的阶乘 i!，c用来存放阶乘之和
int a[2000], c[2000]; 

int main() {
    int n;
    cin >> n;
    
    // 初始化 1! = 1
    a[0] = 1; 
    int len_a = 1; // 当前阶乘的长度
    int len_c = 1; // 结果之和的长度
    
    for (int i = 1; i <= n; i++) {
        // 1. 高精度乘法：计算当前阶乘 a = a * i
        int carry = 0; // 进位
        for (int j = 0; j < len_a; j++) {
            int prod = a[j] * i + carry;
            a[j] = prod % 10;
            carry = prod / 10;
        }
        // 处理乘法产生的剩余进位
        while (carry > 0) {
            a[len_a] = carry % 10;
            carry /= 10;
            len_a++;
        }
        
        // 2. 高精度加法：将当前阶乘累加到总和 c = c + a
        carry = 0;
        len_c = max(len_a, len_c); // 加法后的长度至少是两个加数中较长的那个
        for (int j = 0; j < len_c; j++) {
            int sum = c[j] + a[j] + carry;
            c[j] = sum % 10;
            carry = sum / 10;
        }
        // 处理加法产生的最高位进位
        if (carry > 0) {
            c[len_c] = carry;
            len_c++;
        }
    }
    
    // 3. 倒序输出结果（因为数组的索引0存放的是个位）
    for (int i = len_c - 1; i >= 0; i--) {
        cout << c[i];
    }
    cout << endl;
    
    return 0;
}