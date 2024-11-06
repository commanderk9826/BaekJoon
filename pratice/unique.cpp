#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v1 = {2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 5};
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    for(int i : v1) cout<< i << ", ";
    cout << '\n';

    vector<int> v2 = {2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 5};
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    for(int i : v2) cout<< i << ", ";
    cout << '\n';
    return 0;
}
