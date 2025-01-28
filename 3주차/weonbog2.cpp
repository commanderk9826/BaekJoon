/* 긍정왕 홍철이의 구걸 여행
{0, 0} -> {2, 2}
방문한 정점 다시 방문 불가
해당 맵에 구걸로 얻을 수 있는 돈들이 있음
4방향 탐색
돈들을 모으는 모든 경우의 수


원복 : 상태 값이 그 다음 경우의 수에 반영되지 않도록 하는 것
visited=1 -> go -> visited=0
*/

#include <bits/stdc++.h>
using namespace std;
const int n =3;
int a[3][3]={
    {10, 20, 21},
    {70, 90, 12},
    {80, 110, 120}
};

int visited[3][3];
const int dy[]={-1, 0, 1, 0};
const int dx[]={0, 1, 0, -1};
vector<int> v;

void print(){
    for(int i : v) cout<< i << " ";
    cout<<'\n';
}

void go(int y, int x){
    // {0, 0} -> {2, 2} : 기저사례
    if(y==n-1 && x == n-1){
        print();
        return;
    }
    for(int i=0; i<4; i++){
        // 4방향 탐색
        int ny=y+dy[i];
        int nx=x+dx[i];
        if(ny<0 ||nx<0 || ny>=n||nx>=n) continue; // underflow, overflow 방지
        if(visited[ny][nx]) continue; // 방문한 정점 다시 방문 불가

        visited[ny][nx]=1; // 방문 처리
        v.push_back(a[ny][nx]); // 경로에 추가

        go(ny, nx); // 다음으로 재귀적 탐색

        visited[ny][nx]=0; //탐색 후 방문 상태 복구(원복)
        v.pop_back(); // 경로에서 제거(원복)
    }
}

int main(){
    visited[0][0]=1;
    v.push_back(a[0][0]);
    go(0,0);
    return 0;
}