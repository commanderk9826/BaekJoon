#include <stdio.h>

int main() {
    int n = 1260;
    int count = 0;
    int coin_types[] = {500, 100, 50, 10};
    int size = sizeof(coin_types) / sizeof(coin_types[0]);

    for (int i = 0; i < size; i++) {
        count += n / coin_types[i]; // 동전 개수 추가
        n %= coin_types[i];         // 남은 금액 갱신
    }

    printf("%d\n", count);
    return 0;
}