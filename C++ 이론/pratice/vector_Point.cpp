#include <bits/stdc++.h>

using namespace std;
struct Point{
    int y, x;
};

bool cmp(const Point & a, const Point & b){
    return a.x > b.x;
}

vector<Point> v;
int main(){
    for(int i=10; i>=1; i--){
        v.push_back({i, 10-i});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout<<it.y<<" : "<< it.x << "\n";
    return 0;
}