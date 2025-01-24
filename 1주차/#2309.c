#include <stdio.h>
#include <stdlib.h>

int a[9];
int n = 9, r = 7;

// 배열을 오름차순 정렬하는 함수 (버블 정렬 사용)
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 7개의 숫자의 합이 100인지 확인하고 출력
void solve() {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += a[i];
    }
    if (sum == 100) {
        sort(a, 7); // 오름차순 정렬
        for (int i = 0; i < r; i++) {
            printf("%d\n", a[i]);
        }
        exit(0);
    }
}

// 순열을 생성하는 재귀 함수
void makePermutation(int n, int r, int depth) {
    if (r == depth) {
        solve();
        return;
    }
    for (int i = depth; i < n; i++) {
        // swap
        int temp = a[i];
        a[i] = a[depth];
        a[depth] = temp;

        makePermutation(n, r, depth + 1);

        // swap 원상 복구
        temp = a[i];
        a[i] = a[depth];
        a[depth] = temp;
    }
}

int main() {
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }
    makePermutation(n, r, 0);
    return 0;
}