#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int num;
    cin >> num;
    
    unsigned int ans = ((num & 0xFFFF) << 16) | (num >> 16);
    cout << ans;
    return 0;
}