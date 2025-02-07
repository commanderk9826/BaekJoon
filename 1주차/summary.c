#include <stdio.h>

#define MAX_N 100004

int a[MAX_N], psum[MAX_N];
int n, m, b, c;

int main() {
    // 입력 받기
    scanf("%d %d", &n, &m);
    /*
    sum[i] = psum[i - 1] + a[i];
    누적합을 만들 때는 반드시 "1번째 요소부터" 만드는 것이 좋습니다. 왜냐면 i = i - 1 이부분이 있기 때문에 0부터 시작한다면 -1이 되기 때문입니다.
    
    psum[c] - psum[b - 1]
    그 다음 이렇게 빼기만 하면 A부터 B까지 구해라 라는 것을 쉽게 O(1)만에 할 수 있습니다.
    */
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