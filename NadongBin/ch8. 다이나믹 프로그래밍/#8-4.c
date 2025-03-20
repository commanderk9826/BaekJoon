/*
개미전사
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(){
    int n;
    scanf("%d", &n);
    int *arr =(int*)malloc(n*sizeof(int));
    int d[MAX_SIZE]={0};//DP테이블 초기화

    // 모든 식량 정보 입력받기
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    d[0]=arr[0];
    d[1]=(arr[0]>arr[1])? arr[0]:arr[1];

    for(int i=2; i<n;i++){
        d[i] = (d[i - 1] > d[i - 2] + arr[i]) ? d[i - 1] : (d[i - 2] + arr[i]);
    }

    printf("%d\n", d[n-1]);
    free(arr);
    return 0;
}