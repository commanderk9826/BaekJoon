//선택정렬
#include <stdio.h>

// swap 함수
void swap(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}

// 출력 함수
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Selection sort
void sort(int arr[], int n){
    for(int i=0; i<n;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]) min=j;
        }
        swap(&arr[i], &arr[min]);
    }
}

int main(){
    int arr[10]={7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort : ");
    print(arr, size);

    sort(arr, size);
    printf("Selection Sort 결과 : ");
    print(arr, size);
    return 0;
}