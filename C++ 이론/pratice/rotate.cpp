#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    rotate(v.rbegin(), v.rbegin()+2, v.rend());
    for(int i : v) cout <<i << ' ';
}