/*
순차탐색(Sequential Search)
리스트 안에 있는 특정한 데이터를 찾기 위해 앞에서부터 데이터를 하나씩 차례대로 확인하는 방법

데이터의 개수가 N개일 때 최대 N번의 비교 연산이 필요하므로, 순차 탐색의 최악의 경우 시간 복잡도 = O(N)
*/
#include <stdio.h>
#include <string.h>

int sequential_search(int n, char target[], char array[][20]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(array[i], target) == 0) {
            return i + 1; // +1된 index 반환
        }
    }
    return -1; // 찾지 못한 경우
}

int main() {
    int n;
    char target[20];
    
    printf("생성할 원소 개수를 입력한 다음 한 칸 띄고 찾을 문자열을 입력하세요.\n");
    scanf("%d %s", &n, target);

    char array[n][20];

    printf("앞서 적은 원소 개수만큼 문자열을 입력하세요. 구분은 띄어쓰기 한 칸으로 합니다.\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", array[i]);
    }

    printf("%d\n", sequential_search(n, target, array));

    return 0;
}