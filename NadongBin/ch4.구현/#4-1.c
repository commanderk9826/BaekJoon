#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 1, y = 1;
    char plan[10];

    // N 입력받기
    scanf("%d", &n);
    getchar(); // 개행 문자 제거 (버퍼 초기화)

    // L, R, U, D에 따른 이동 방향
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    char move_types[4] = {'L', 'R', 'U', 'D'};

    // 이동 계획 입력 받기
    while (1) {
        //if (scanf("%s", plan) == EOF) break;  // 입력 종료 감지
        if (scanf("%s", plan) != 1) break; // 입력을 받아 plan 변수에 저장 (입력이 없다면 종료)

        int nx = x, ny = y;

        // 이동 후 좌표 구하기
        for (int i = 0; i < 4; i++) {
            if (plan[0] == move_types[i]) {
                nx = x + dx[i];
                ny = y + dy[i];
            }
        }

        // 공간을 벗어나면 무시
        if (nx < 1 || ny < 1 || nx > n || ny > n) continue;

        // 이동 수행
        x = nx;
        y = ny;

        if (getchar() == '\n') break; // Enter 감지 (버퍼에서 개행 문자가 남아 있는 경우 종료)
        //if (strcmp(plan, "\n") == 0) break;  // Enter(개행 문자) 감지

    }

    // 최종 위치 출력
    printf("%d %d\n", x, y);

    return 0;
}