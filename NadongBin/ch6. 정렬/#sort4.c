//퀵 정렬
#include <stdio.h>

// swap 함수
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// 출력 함수
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

// Quick Sort
void sort(int arr[], int start, int end) {
    if (start >= end) return;  // 원소가 1개 이하이면 종료

    int pivot = start;
    int left = start + 1;
    int right = end;

    while (left <= right) {
        // 피벗보다 큰 값을 찾을 때까지
        while (left <= end && arr[left] <= arr[pivot]) left++;

        // 피벗보다 작은 값을 찾을 때까지
        while (right > start && arr[right] >= arr[pivot]) right--;

        if (left > right) {
            swap(&arr[pivot], &arr[right]);
        } else {
            swap(&arr[left], &arr[right]);
        }
    }
    // 분할 이후 왼쪽과 오른쪽 부분을 각각 정렬
    sort(arr, start, right - 1);
    sort(arr, right + 1, end);
}

int main(){
    int arr[10]={7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    int size= sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, 9);
    printf("Quick sort 결과 : ");
    print(arr, size);
}