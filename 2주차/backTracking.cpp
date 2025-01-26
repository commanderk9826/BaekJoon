/*
BackTracking = 완전탐색 + 가지치기
가치지기 = 현재 탐색하고 있는 경로가 목표 해에 도달할 가능성이 없다고 판단되면 더 이상 그 경로를 탐색하지 않고 BackTracking 하는 방법
주로 재귀를 통해 구현

입력
10
24 35 38 40 49 59 60 67 83 98

출력
1024 or 10
*/
#include <bits/stdc++.h>
using namespace std;
int n, temp, ret, cnt;
vector<int> v;
const int mod=11;

void go(int idx, int sum){
    //if(ret == 10) return;//문제의 핵심을 파악하고 백트래킹 코드 추가
    if(idx==n){
        ret = max(ret, sum%mod);// 최대값 갱신
        cnt++;
        return;
    }
    // 1) v[idx]를 '선택'하여 더하는 경우
    // => sum에 v[idx]를 더하고, 다음 인덱스로 이동
    go(idx+1, sum+v[idx]);

    // 2) v[idx]를 '선택하지 않는' 경우
    // => sum 유지, 다음 인덱스로 이동
    go(idx+1, sum);
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >>temp;
        v.push_back(temp);
    }
    go(0, 0);
    cout << "탐색횟수 : " << cnt << "\n";
    cout << "mod시행 후 가장 큰수 : " << ret << "\n";
    return 0;
}