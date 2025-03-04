#include <stdio.h>
#define N 100000
int ascending(const void *a, const void *b){
    int A = *(int*)a;
    int B = *(int*)b;

    return A-B;
}

int descending(const void *a, const void *b){
    int A = *(int*)a;
    int B = *(int*)b;

    return B-A;
}

void pSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("%d\n", sum);
}

void swap(int* a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int n, k;
    int arrA[N], arrB[N];
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &arrA[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &arrB[i]);
    }
    qsort(arrA, n, sizeof(int), ascending);
    qsort(arrB, n, sizeof(int), descending);

    for(int i=0; i<k; i++){
        if(arrA[i]<arrB[i]) swap(&arrA[i], &arrB[i]);
    }

    pSum(arrA, n);
    return 0;
}