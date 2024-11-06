#include <bits/stdc++.h>

using namespace std;
int n= 4;
int fibo(int n){
    cout << "fibo : " << n << '\n';
    if(n == 0 | n == 1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    cout << fibo(n) << '\n';
    return 0;
}