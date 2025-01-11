#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v1 = {2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 5};
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    for(int i : v1) cout<< i << " ";// 2, 1, 2, 3, 5, 6, 7, 8, 5,
    cout << '\n';

    vector<int> v2 = {2, 2, 1, 1, 2, 2, 3, 4, 5, 6, 7, 8, 5};
    sort(v2.begin(), v2.end());// 1, 1, 2, 2, 2, 2, 3, 4, 5, 5, 6, 7, 8
    auto it = unique(v2.begin(), v2.end());// 1, 2, 3, 4, 5, 6, 7, 8
    cout<< *it << '\n';// 5
    for(int i : v2) cout<< i << " ";// 1, 2, 3, 4, 5, 6, 7, 8, 5, 5, 6, 7, 8
    cout << '\n';

    v2.erase(it, v2.end());
    for(int i : v2) cout<< i << " ";// 1, 2, 3, 4, 5, 6, 7, 8
    cout << '\n';
    return 0;
}
