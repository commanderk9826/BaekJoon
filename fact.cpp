#include <bits/stdc++.h>

using namespace std;
auto n = 5;
int fact(int n){
    int ret =1;
    for(auto i = 1; i<=n; i++){
        ret*=i;
    }
    return ret;

}

int main(){
    cout << fact(n) << '\n';
    return 0;

}