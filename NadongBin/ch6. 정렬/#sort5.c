#include <stdio.h>

int compare(const void* a, const void* b) {
    int A = *(int*)a;
    int B = *(int*)b;
    return A-B;  // 오름차순 -> 내림차순 : B-A
}

void print(int arr[], int n){
    for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10]={5, 7, 9, 0, 3, 1, 6, 2, 4, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort : ");
    print(arr, size);

    qsort(arr, size, sizeof(int), compare);
    printf("qSort 결과 : ");
    print(arr, size);
    return 0;
}