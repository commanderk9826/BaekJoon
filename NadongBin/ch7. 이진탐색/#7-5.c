/*
부품찾기
7-5.py풀이(이진탐색)
시간복잡도 : O((M+N)XlogN)
*/

#include <stdio.h>
#include <stdlib.h>

//이진탐색 함수
int search(int arr[], int target, int start, int end){
    while (start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) end=mid-1;
        if(arr[mid]<target) start=mid+1;
    }
    return -1;
}

//compare함수(qsort용)
int compare(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}


int main(){
    int n, m;

    //가게의 부품 개수 입력
    scanf("%d", &n);

    //배열 동적 할당
    int *arrN =(int*)malloc(n*sizeof(int));

    //가게의 부품 번호 입력
    for(int i=0;i<n;i++){
        scanf("%d", &arrN[i]);
    }

    //정렬 수행 : qsort, compare함수
    qsort(arrN, n, sizeof(int), compare);

    //손님이 요청한 부품 개수 입력
    scanf("%d", &m);
    int *arrM=(int*)malloc(m*sizeof(int));

    //손님이 요청한 부품 번호 확인 및 출력
    for(int i=0;i<m;i++){
        scanf("%d", &arrM[i]);
        if(search(arrN, arrM[i], 0, n-1)!=-1) printf("yes ");
        else printf("no ");
    }
    //동적할당 해체
    free(arrN);
    free(arrM);

    return 0;
}

