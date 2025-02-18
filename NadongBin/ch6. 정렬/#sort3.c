//버블정렬
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

// Bubble sort
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(){
    int arr[10]={7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    int size= sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    printf("Bubble sort 결과 : ");
    print(arr, size);
}

