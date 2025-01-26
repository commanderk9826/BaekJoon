/* 당근마켓 엔지니어 승원이
입력
맵의 세로길이 N과 가로길이 M이 주어지고 이어서 N*M의 맵이 주어진다. 그 다음 줄에 승원이의 위치(y,x)와 당근마켓의 위치(y,x)가 주어진다. 이때 승원이의 시작위치 (y, x)에서
"당근 한개"가 이미 소모된 상태로 본다.

출력
당근을 몇개 소모해야 하는지 출력하라.

범위
1<=N<=100
1<=M<=100

예제 입력
5 5
0 0
4 4
1 0 1 0 1
1 1 1 0 1
0 0 1 1 1
0 0 1 1 1
0 0 1 1 1

예제출력
9

해설
가중치가 같은 그래프내의 최단거리 알고리즘임. 한칸씩 이동할때 마다 당근 한개를 쓰기 때문에 가중치가 같은 그래프이며 최단거리를 구하는 알고리즘임
*/

/* 개념 review : 주요 논리 연산자
&&(and): $a && $b : $a와 $b가 모두 true인 경우 true
||(or): $a || $b : $a 또는 $b의 어느 하나가 true인 경우 true
!(not): !$a : $a가 true가 아닌 경우 true
*/

#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, a[max_n][max_n], visited[max_n][max_n], y, x, sy, sx, ey, ex;

int main(){

    //예제 입력 처리
    //scanf("%d %d", &n, &m);
    cin >> n >> m;
    cin >> sy >> sx;
    cin >> ey >> ex;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    queue<pair<int, int>> q; // 2차원 배열이기 때문에 y, x를 담기 위해 pair를 정의하고
    visited[sy][sx]=1; // visited배열의 값을 1로  설정한 뒤
    q.push({sy, sx}); // 시작지점을 큐에 푸시함.
    while (q.size()) // 이후 큐의 크기만큼 while반복문을 돌며 탐색 진행
    {
        tie(y,x) = q.front(); q.pop(); // 큐의 가장 앞부분에 있는 좌표를 끄집어내어 탐색을 다시 이어가며 
        
        for(int i=0; i<4; i++){// 4방향을 탐색하며
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(ny<0 || ny>=n || nx<0 || nx>=m || a[ny][nx]==0) continue; // underflow, overflow 체크

            if(visited[ny][nx]) continue;
            // 다시 visited배열을 갱신하며 큐에 넣으며 진행합니다.
            // 핵심 : 최단거리배열, 내가 가야할 곳인 ny, nx에 지금 있는 곳 y,x로부터 +1를 하면서 최단거리배열을 쌓음
            // visited[there]=visited[here]+1;
            visited[ny][nx] = visited[y][x]+1; 
            q.push({ny, nx});
        }
    }

    printf("\n%d\n", visited[ey][ex]);

    //최단거리 디버깅
    printf("최단거리 배열 출력\n");
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << visited[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}