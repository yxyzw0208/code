#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;  
    char op;              
    char chu;

    cin >> a >> chu>> b;   
    long long g = gcd(abs(a), abs(b));
    a /= g; b /= g;
    
    
    while (cin >> op >> c >> chu >> d) {  
        if (op == '-') c = -c;  
        
        a = a * d + c * b;
        b = b * d;
        
        g = gcd(abs(a), abs(b));
        a /= g; b /= g;
    }
    
    if (b < 0) {        
        b = -b;
        a = -a;
    }
    
    if (a == 0) {       
        cout << 0;
    } else if (b == 1) {  
        cout << a;
    } else {
        cout << a << "/" << b;
    }
    
    return 0;
}