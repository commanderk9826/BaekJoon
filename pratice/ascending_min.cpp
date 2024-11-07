#include <bits/stdc++.h>
using namespace std;
int n, temp;
vector<int> v;
int main(){
    cin >> n;
    double b = 0;
    for(int i=0; i < n; i++){
        cin >> temp;
        b += temp;
        v.push_back(temp);
    }
    //정렬된 배열 출력
    sort(v.begin(), v.end());
    for(int i : v) cout<< i << " ";
    cout << '\n';

    //배열의 평균값 출력, 소수점 두번째 자리까지
    cout<<fixed<<setprecision(2)<<b/n<<'\n';

    return 0;
}