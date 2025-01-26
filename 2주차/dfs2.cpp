/* 종화는 방구쟁이야!
예제 입력
5 5
1 0 1 0 1
1 1 0 0 1
0 0 0 1 1
0 0 0 1 1
0 1 0 0 0
예제 출력
4
*/

#include <bits/stdc++.h>
using namespace std;
int dy[4]={-1, 0, 1, 0};
int dx[4]={0, 1, 0, -1};
int m, n , k ,y, x, ret, ny, nx, t;
int a[104][104];
bool visited[104][104];

// 돌다리를 두들겨 보다.
void DFS1(int y, int x){
    cout<<y<<" : "<< x <<'\n'; // 방문 위치 출력
    visited[y][x]=1;// 방문 처리
    for(int i=0;i<4; i++){
        ny=y+dy[i];
        nx=x+dx[i];
        if(ny<0 || nx <0 || ny>=n || nx >=m) continue; // 범위 체크
        if(a[ny][nx]==1 && !visited[ny][nx]) DFS1(ny,nx); // 육지이고, 방문하지 않은 곳만 탐색
    }
    return;
}

//못 먹어도 go
void DFS2(int y, int x){
    if(visited[y][x]) return; // 방문했다면 종료
    cout<<y<<" : "<< x <<'\n'; // 방문 위치 출력
    visited[y][x]=1; // 방문 처리
    for(int i=0;i<4; i++){
        ny=y+dy[i];
        nx=x+dx[i];
        if(ny<0 || nx <0 || ny>=n || nx >=m) continue; // 범위 체크
        if(a[ny][nx]==1) DFS2(ny,nx); // 육지라면, DFS수행
    }

}

int main(){
    cin >> n >> m;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(a[i][j]==1 && !visited[i][j]){
                ret++; 
                DFS2(i, j);
                cout << ret << "번째 DFS를 시작합니다.\n";
            }
        }
    }
    cout<< ret << "\n";
    return 0;
}


/* 개념 review : 주요 논리 연산자
&&(and): $a && $b : $a와 $b가 모두 true인 경우 true
||(or): $a || $b : $a 또는 $b의 어느 하나가 true인 경우 true
!(not): !$a : $a가 true가 아닌 경우 true
*/