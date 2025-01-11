#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    cout<<a<<", "<<b<<'\n';
    if(a==0) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);// 최소공배수=두수의 곱/최대공약수
}

int main(){
    int a=10, b=12;
    cout<<lcm(a,b)<<'\n';
    cout<<gcd(a,b)<<'\n';
    return 0;
}