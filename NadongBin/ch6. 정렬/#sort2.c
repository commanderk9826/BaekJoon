/*
삽입정렬
1. 두 번째 데이터부터 시작한다. 왜냐하면 첫 번째 데이터는 그 자체로 정렬되어 있다고 판단하기 때문이다.
2. 정렬이 이루어진 원소는 항상 오름차순을 유지한다.
*/
#include <stdio.h>

// swap 함수
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b =temp;
}

// 출력 함수
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insertion sort
void sort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(&arr[j], &arr[j-1]);
            }
            else break;
        }
    }
}

int main(){
    int arr[10]={7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort : ");
    print(arr, size);

    sort(arr, size);
    printf("Insertion Sort 결과 : ");
    print(arr, size);
    return 0;
}
