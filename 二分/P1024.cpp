#include<bits/stdc++.h>
using namespace std;
double a,b,c,d,eps=1e-4;
vector<double> ans;

double f(double x){
    return a*x*x*x+b*x*x+c*x+d;
}
void solve(double l,double r){
    if(fabs(r-l)<eps){
        ans.push_back((l+r)/2);//两数相等，中点位零点
        return;
    }
    double mid = (l+r)/2;
    double v_l = f(l);
    double v_r = f(r);
    double v_m = f(mid);
    
    if(v_l*v_m<0)  solve(l,mid);
    if(v_m*v_r<0)  solve(mid,r);

}
int main(){
    cin>>a>>b>>c>>d;
    double l=-100.00,r = 100.00;
    for(double i = -100;i<=100;i++){
        if(fabs(f(i))<1e-3){
            ans.push_back(i);
            continue;
        }
        if(f(i)*f(i+1)<0) solve(i,i+1);
    }
    sort(ans.begin(),ans.end());
    vector<double> res;
    for(auto x:ans){
        if(res.empty()||x-res.back()>1e-2){
            res.push_back(x);
        }
    }
    for(auto x:res) printf("%.2f ",x);
    return 0;
}