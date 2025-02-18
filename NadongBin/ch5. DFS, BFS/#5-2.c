#include <stdio.h>
#include <stdbool.h>

#define MAX 9

// 큐를 위한 전역 변수 설정
int queue[MAX];
int front = 0, rear = 0;

// 그래프를 인접 리스트로 표현
int graph[MAX][MAX] = {
    {},
    {2, 3, 8},
    {1, 7},
    {1, 4, 5},
    {3, 5},
    {3, 4},
    {7},
    {2, 6, 8},
    {1, 7}
};

// 방문 여부를 저장하는 배열
bool visited[MAX] = {0};

// 큐에 원소 추가하는 함수
void enqueue(int value) {
    queue[rear++] = value;
}

// 큐에서 원소를 꺼내는 함수
int dequeue() {
    return queue[front++];
}

// BFS 함수 정의
void bfs(int start) {
    visited[start] = 1; //현재 노드 방문처리
    enqueue(start);

    while (front < rear) {
        int v = dequeue();
        printf("%d ", v);

        // 현재 노드와 연결된 모든 노드 탐색
        for (int i = 0; i < MAX; i++) {
            if (graph[v][i] != 0 && visited[graph[v][i]]==0) {
                visited[graph[v][i]] = 1;
                enqueue(graph[v][i]);
            }
        }
    }
}

int main() {
    printf("BFS 탐색 순서: ");
    bfs(1); // 시작 노드를 1로 설정
    return 0;
}