#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int result = 0;

    while (1) {
        // (N == K로 나누어떨어지는 수)가 될 때까지 1씩 빼기
        int target = (n / k) * k;
        result += (n - target);
        n = target;

        // N이 K보다 작을 때(더 이상 나눌 수 없을 때) 반복문 탈출
        if (n < k) {
            break;
        }

        // K로 나누기
        result += 1;
        n /= k;
    }

    // 마지막으로 남은 수에 대하여 1씩 빼기
    result += (n - 1);

    printf("%d\n", result);
    return 0;
}