/*
퀵 정렬
1. 기준을 설정하여 큰 수와 작은 수를 교환한 후 리스트를 반으로 나누는 방식
2. 큰 숫자와 작은 숫자를 교환할 때, 교환하기 위한 기준를 피벗이라고 표현(첫 번째 데이터 = 피벗)
3. 두 값이 엇갈린 경우 '작은 데이터'와 '피벗'의 위치를 서로 변경
4. 재귀함수 형태로 작성하면 구현이 매우 간결(종료조건 = 현재 리스트의 개수가 1개)
*/
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int start, int end){
    if(start>=end) return;

    int pivot = start;
    int left = start+1;
    int right = end;

    while (left<=right)
    {
        while(left<=end && arr[left]<=arr[pivot]) left++; //피벗보다 큰 값을 찾을 때까지
        while(right>start && arr[right]>=arr[pivot]) right--; //피벗보다 작은 값을 찾을 때까지

        if(left>right){
            swap(&arr[right], &arr[pivot]);
        }else{
            swap(&arr[left], &arr[right]);
        }
    }
    
    // 분할 이후 왼쪽과 오른쪽 부분을 각각 정렬
    sort(arr, start, right-1);
    sort(arr, right+1, end);
}

int main(){
    int arr[10]={5, 7, 9, 0, 3, 1, 6, 2, 4, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort : ");
    print(arr, size);

    sort(arr, 0, 9);
    printf("Quick Sort 결과 : ");
    print(arr, size);
    return 0;
}
