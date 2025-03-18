/*
부품찾기
부품이 N개
5
8 3 7 9 2
M개 종류의 부품
3
5 7 9

no yes yes
N, M =< 1000000

solution
N개의 부품을 번호를 기준으로 정렬
M개의 부품이 각각 매장에 존재하는지 검사 
*/

#include <stdio.h>
#define N 1000
#define M 1000

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void sort(int arr[], int start, int end){
    if(start >= end) return;
    int pivot= start;
    int left= start+1;
    int right = end;

    while ((left<=right))
    {
        while(left<end && arr[left]<=arr[pivot]) left++;//pivot보다 큰 값을 찾을 때까지
        while(right>start && arr[right]>=arr[pivot]) right--;//pivot보다 작은 값을 찾을 때까지

        if(left>right){
            swap(&arr[right], &arr[pivot]);
        }else{
            swap(&arr[left], &arr[right]);
        }
    }

    sort(arr, start, right-1);
    sort(arr, right+1, end);
}

int search(int arr[], int target, int start, int end){
    if(start>end){
        return -1;
    }

    int mid = (start+end)/2;

    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
        return search(arr, target, start, mid-1);
    }else{
        return search(arr, target,  mid+1, end);
    }
}

int main(){
    int n, arrN[N];
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &arrN[i]);
    }
    
    int m, arrM[M];
    scanf("%d", &m);
    for(int i=0; i<m;i++){
        scanf("%d", &arrM[i]);
    }

    int start = 0;
    int end = n-1;

    //n개의 부품 오름차순 정렬
    sort(arrN, start, end);

    for(int i=0;i<m;i++){
        int result = search(arrN, arrM[i], start, end);
        if(result == -1) printf("no ");
        else printf("yes ");
    }
    return 0;
}