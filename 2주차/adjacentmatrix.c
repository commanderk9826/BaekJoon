#include <stdio.h>

#define V 10

int a[V][V] = {0}, visited[V] = {0};

void go(int from) {
    visited[from] = 1; // 방문 처리
    printf("%d\n", from);

    for (int i = 0; i < V; i++) {
        if (visited[i]) continue;
        if (a[from][i]) {
            go(i);
        }
    }
}

int main() {
    // 그래프 간선 설정 (무방향 그래프)
    a[1][2] = 1; a[2][1] = 1;
    a[1][3] = 1; a[3][1] = 1;
    a[3][4] = 1; a[4][3] = 1;

    // DFS 실행
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (a[i][j] && visited[i] == 0) {
                go(i);
            }
        }
    }

    return 0;
}