#include <stdio.h>

#define MAX_N 100004

int a[MAX_N], psum[MAX_N];
int n, m, b, c;

int main() {
    // 입력 받기
    scanf("%d %d", &n, &m);
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        psum[i] = psum[i - 1] + a[i]; // 누적 합 계산
    }

    // 질의 처리
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &b, &c);
        printf("%d\n", psum[c] - psum[b - 1]);
    }

    return 0;
}