#include <stdio.h>

#define MAX 100

// 방향 배열: 오른쪽(0) → 아래(1) → 왼쪽(2) → 위쪽(3)
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int visited[MAX][MAX] = {0}; // 방문 여부 배열
    int x = 0, y = 0, dir = 0;   // 초기 위치 및 방향 설정
    int turn_count = 0;          // 방향 전환 횟수

    visited[x][y] = 1; // 첫 번째 위치 방문 처리
    for (int i = 1; i < N * M; i++) { // 총 N*M개의 칸을 방문해야 함
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny]) {
            // 이동 가능하면 이동
            x = nx;
            y = ny;
            visited[x][y] = 1;
        } else {
            // 이동 불가능하면 방향 전환 (카운트 증가)
            dir = (dir + 1) % 4;
            turn_count++;

            // 새로운 방향으로 이동 (항상 이동 가능함)
            x += dx[dir];
            y += dy[dir];
            visited[x][y] = 1;
        }
    }

    printf("%d\n", turn_count);
    return 0;
}