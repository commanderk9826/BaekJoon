#include <stdio.h>

#define N 3

int a[N][N], visited[N][N];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void go(int y, int x) {
    visited[y][x] = 1;
    printf("%d: %d\n", y, x);

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];  // 버그 수정: dx[y] → dx[i]

        if (ny < 0 || ny >= N || nx < 0 || nx >= N) continue; // 범위 초과 방지
        if (a[ny][nx] == 0) continue; // 이동 불가능한 경우
        if (visited[ny][nx]) continue; // 이미 방문한 경우

        go(ny, nx);
    }
}

int main() {
    // 입력 받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    go(0, 0); // DFS 실행
    return 0;
}