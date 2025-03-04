 /*
계수정렬
1. 데이터의 크기 범위가 제한되어 정수 형태로 표현할 수 있을 때만 사용가능
2. 별도의 리스트를 선언하고 그 안에 정렬에 대한 정보를 담는다(리스트에는 각 데이터가 몇번 등장했는지 그 횟수가 기록됨)
-> 데이터의 크기가 한정되어 있고, 데이터의 크기가 많이 중복되어 있을수록 유리하며 항상 사용은 불가능함
*/
#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int n) {
    // 배열 내 최댓값 찾기
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

// 동적 할당으로 count 배열 생성 (최댓값 + 1 크기)
    int *count = (int*)calloc(max_val + 1, sizeof(int));
    if(count == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
// 등장 횟수 세기
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    // count 배열을 이용해 오름차순 정렬
    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
    free(count);
}

int main() {
    int arr[14] = {7, 5, 9, 0, 3, 1, 6, 2, 9, 8, 2, 7, 9, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Before Sort : ");
    print(arr, size);

    sort(arr, size);
    printf("[Counting Sort] 결과: ");
    print(arr, size);
    return 0;
}


