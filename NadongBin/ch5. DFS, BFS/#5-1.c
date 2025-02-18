#include <stdio.h>
#include <stdbool.h>

#define MAX 9

// 그래프를 인접 리스트로 표현
int graph[MAX][MAX] = {
    {},
    {2, 3, 8},  // 1번 노드와 연결된 노드
    {1, 7},     // 2번 노드와 연결된 노드
    {1, 4, 5},  // 3번 노드와 연결된 노드
    {3, 5},     // 4번 노드와 연결된 노드
    {3, 4},     // 5번 노드와 연결된 노드
    {7},        // 6번 노드와 연결된 노드
    {2, 6, 8},  // 7번 노드와 연결된 노드
    {1, 7}      // 8번 노드와 연결된 노드
};

// 방문 여부를 저장하는 배열
bool visited[MAX] = {0};

// DFS 함수 정의
void dfs(int v) {
    visited[v] = 1; // 현재 노드를 방문 처리
    printf("%d ", v);

    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for (int i = 0; i < MAX; i++) {
        if (graph[v][i] != 0 && visited[graph[v][i]]==0) {
            dfs(graph[v][i]);
        }
    }
}

int main() {
    printf("DFS 탐색 순서: ");
    dfs(1); // 시작 노드를 1로 설정
    return 0;
}