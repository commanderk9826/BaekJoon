#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;

int main(){
    v.push_back({1, 3});
    v.push_back({1, 2});
    v.push_back({2, 4});
    v.push_back({2, 1});
    v.push_back({3, 5});
    v.push_back({3, 0});
    v.push_back({3, 4});
    
    sort(v.begin(), v.end());
    for(auto it : v) {
        cout<< it.first << " : " << it.second << "\n";
    }
    return 0;
}