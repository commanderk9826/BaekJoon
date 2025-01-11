#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 1, r = 2, n = 4;
    vector<int> v;
    cout << a * ((int)pow(2, n) - 1) / (r - 1);
    cout << '\n';
    
    for(int i = 0; i < n; i++){
        v.push_back(a);
        a *= r;
        cout << "a : " << a << '\n';
    }

    for(int i : v) cout << i << ' '; 
}