#include <bits/stdc++.h>
using namespace std;

const int max_n = 104;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, a[max_n][max_n], visited[max_n][max_n];
int y, x, sy, sx, ey, ex;

// BFS 함수 정의
void BFS(int Y, int X) {
    queue<pair<int, int>> q;
    visited[Y][X] = 1; // 
    q.push({Y, X});

    while (!q.empty()) {
        tie(y, x) = q.front(); q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> sy >> sx;
    cin >> ey >> ex;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    BFS(sy, sx);
    cout << "\n" << visited[ey][ex] << "\n"; 

    // 최단거리 배열 디버깅 출력
    cout << "최단거리 배열 출력\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}