#include <stdio.h>

#define V 10

int adj[V][V]; // 인접 리스트 (배열로 변환)
int size[V] = {0}; // 각 노드의 인접 노드 개수 저장
int visited[V] = {0}; // 방문 여부 저장

void go(int idx) {
    printf("%d\n", idx);
    visited[idx] = 1;

    // 인접 리스트 순회
    for (int i = 0; i < size[idx]; i++) {
        int there = adj[idx][i];
        if (visited[there]) continue;
        go(there);
    }
}

int main() {
    // 그래프 간선 추가 (인접 리스트 방식)
    adj[1][size[1]++] = 2;
    adj[1][size[1]++] = 3;

    adj[2][size[2]++] = 1;

    adj[3][size[3]++] = 1;
    adj[3][size[3]++] = 4;

    adj[4][size[4]++] = 3;

    // DFS 실행
    for (int i = 0; i < V; i++) {
        if (size[i] > 0 && visited[i] == 0) {
            go(i);
        }
    }

    return 0;
}