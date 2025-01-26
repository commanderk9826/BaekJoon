/*
Q. 승철이의 문단속
숫자 몇개를 골라 숫자의 합이 "소수"
총 몇 개의 경우의 수가 있는지
N개이 요석 후보의 숫자와 다음 줄에 해당 숫자, N<=100

입력
10
24 35 38 40 49 59 60 67 83 98

출력
176
*/

#include <bits/stdc++.h>
using namespace std;
int n, temp;
vector<int> v;

//소수 판별하는 함수
bool check(int n){
    if(n<=1) return false;// 1보다 작으면 소수 x
    if(n==2) return true;// 2이면 소수 o
    if(n%2 == 0) return false; // 2로 나뉘면 소수 x
    for(int i=3; i*i<=n; i++){// 3이상의 숫자로 나뉘면 소수 x
        if(n%i==0) return false;
    }
    return true; // 나머지는 소수 
}

//재귀함수
int go(int idx, int sum){
    // 디버그 출력: 현재 상태
    cout << "[DEBUG] call go(" << idx << ", " << sum << ")\n";

    if(idx==n){
        bool isPrime = check(sum);
        cout << "idx == n => sum = " << sum << ", isPrime = " << (isPrime ? "true" : "false") << "\n";
        return check(sum); //합이 소수인지 체크
    }
    // 1) v[idx]를 '선택'하여 더하는 경우
    // => sum에 v[idx]를 더하고, 다음 인덱스로 이동
    int includeCurrent = go(idx + 1, sum + v[idx]);

    // 2) v[idx]를 '선택하지 않는' 경우
    // => sum 유지, 다음 인덱스로 이동
    int excludeCurrent = go(idx + 1, sum);

    // 두 경우의 수 합산 2^n의 경우의 수
    int result = includeCurrent + excludeCurrent;

    return result;
}

int main(){
    cin>>n;
    for(int i=0; i<n;i++){
        cin >>temp;
        v.push_back(temp);
    }

    cout<<go(0,0)<<"\n";
    return 0;
}
