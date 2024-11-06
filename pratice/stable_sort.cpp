#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first; // 첫 번째 요소 기준으로 오름차순 정렬
}

int main() {
    // pair의 첫 번째 요소는 정렬할 값, 두 번째 요소는 원래 인덱스를 나타냄
    vector<pair<int, int>> pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};
    
    cout << "Original: ";
    for (const auto& p : pairs) cout << "(" << p.first << " ," << p.second << ") "; 
    cout << "\n";

    // 일반 sort 사용
    sort(pairs.begin(), pairs.end(), cmp);
    cout << "Sorted with sort: ";
    for (const auto& p : pairs) cout << "(" << p.first << ", " << p.second << ") ";
    cout << "\n";
    
    // 원본 데이터로 초기화
    pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};

    // stable_sort 사용
    stable_sort(pairs.begin(), pairs.end(), cmp);
    cout << "Sorted with stable_sort: ";
    for (const auto& p : pairs) cout << "(" << p.first << ", " << p.second << ") ";
    cout << "\n";

    return 0;
}