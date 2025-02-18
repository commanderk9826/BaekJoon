#include <stdio.h>
#include <stack>  // 스택 라이브러리 사용 (C++의 STL 사용)

#define MAX 1000

int n, m;
int graph[MAX][MAX];
int visited[MAX][MAX]; // 방문 여부 저장 배열

// 방향 벡터 (상, 하, 좌, 우)
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

// 스택을 사용한 DFS (반복문 기반)
void dfs_iterative(int start_x, int start_y) {
    std::stack<std::pair<int, int>> s; // 좌표를 저장할 스택
    s.push({start_x, start_y});
    visited[start_x][start_y] = 1; // 방문 처리

    while (!s.empty()) {
        int x = s.top().first;
        int y = s.top().second;
        s.pop();

        // 상, 하, 좌, 우 탐색
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 유효한 범위인지 확인
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                // 방문하지 않았고, 0인 곳만 탐색
                if (graph[nx][ny] == 0 && !visited[nx][ny]) {
                    visited[nx][ny] = 1; // 방문 처리
                    s.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    // 2차원 리스트 입력받기
    for (int i = 0; i < n; i++) {
        char row[MAX];
        scanf("%s", row);  // 공백 없이 입력받음
        for (int j = 0; j < m; j++) {
            graph[i][j] = row[j] - '0';  // 문자 '0', '1'을 정수로 변환
            visited[i][j] = 0;  // 방문 여부 초기화
        }
    }

    // DFS를 활용한 덩어리 개수 세기
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 방문하지 않았고, 0인 경우 새로운 덩어리 발견
            if (graph[i][j] == 0 && visited[i][j] == 0) {
                count++;  // 새로운 덩어리 개수 증가
                dfs_iterative(i, j); // 스택을 사용한 DFS 수행
            }
        }
    }

    // 결과 출력
    printf("%d\n", count);

    return 0;
}