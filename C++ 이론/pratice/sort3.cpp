#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) 
        return a.first > b.first;  // first가 다르면 내림차순
    return a.second < b.second;     // first가 같으면 second에 대해 오름차순
}

int main(){
    v.push_back({1, 3});
    v.push_back({1, 2});
    v.push_back({2, 4});
    v.push_back({2, 1});
    v.push_back({3, 5});
    v.push_back({3, 0});
    v.push_back({3, 4});
    
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) {
        cout<< it.first << " : " << it.second << "\n";
    }
    return 0;
}