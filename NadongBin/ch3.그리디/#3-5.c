#include <stdio.h>
#include <limits.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int result = 0;

    // 한 줄씩 입력받아 확인
    for (int i = 0; i < n; i++) {
        int min_value = INT_MAX; // 현재 행의 최소값을 찾기 위해 최대값으로 초기화

        for (int j = 0; j < m; j++) {
            int num;
            scanf("%d", &num);
            if (num < min_value) {
                min_value = num;
            }
        }

        // '가장 작은 수'들 중에서 가장 큰 수 찾기
        if (min_value > result) {
            result = min_value;
        }
    }

    printf("%d\n", result); // 최종 답안 출력
    return 0;
}