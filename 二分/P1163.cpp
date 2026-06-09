#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll w0, w, m;

bool check(double rate)
{
    double now = w0;
    for(int i = 0; i < m; i++)
    {
        now = now * (1 + rate) - w;
        if(now < 0) return false;
    }
    return true;
}

int main()
{
    cin >> w0 >> w >> m;
    double l = 0.0, r = 3.0;
    
    for(int t = 0; t < 100; t++)
    {
        double mid = (l + r) / 2;
        if(check(mid))
        {//尽可能减小
            r = mid;
        }
        else
        {//增大
            l = mid;
        }
    }
    printf("%.1f", l*100 );
    return 0;
}