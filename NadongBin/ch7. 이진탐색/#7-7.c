/*
떡볶이 떡 만들기
파라메트릭 서치 = 최적화 문제를 결정문제로 해결하는 기법, 원하는 조건을 만족하는 가장 알맞은 값을 찾는 문제

-> 적절한 높이를 찾을 때까지 절단기의 높이 H를 반복해서 조정

조건의 만족여부에 따라서 탐색범휘를 좁히고, 범위를 좁힐 때에는 이진탐색의 원리를 이용하여 절반씩 탐색 범위를 좁힘

*/
#include <stdio.h>
#include <stdlib.h>

// 배열에서 최댓값 찾기 함수
int getMax(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

//이진탐색 함수 
int search(int arr[], int n, int m){
    int start =0;
    int end = getMax(arr, n);
    int result =0;

    while(start<=end){
        //mid
        int mid =(start+end)/2;

        //떡의 양을 저장하는 변수
        long long total = 0;
        /*
        자료형 문제
        total을 int로 선언했지만, int는 값이 클 경우 오버플로우가 발생할 수 있습니다.
        total을 long long으로 변경해야 합니다.
        */

        //잘랐을 때 떡의 양 계산
        for(int i=0; i<n;i++){
            if(arr[i]>mid) total+=(arr[i]-mid);
        }

        //떡의 양이 부족한 경우 더 많이 자르기(왼쪽 부분 탐색)
        if(total<m){
            end = mid-1;
        }
        //떡의 양이 충분한 경우 덜 자르기(오른쪽 부분 탐색)
        else{
            result = mid; //최대한 덜 짤랐을 때가 정답
            start = mid+1;
        }
        /*
        1. search 함수에서 결과값 저장 문제
        total == m일 때 result = mid;를 설정했지만, 이후에도 계속 탐색을 진행해야 합니다.
        이진 탐색을 할 때, total >= m인 경우 result = mid;를 저장해야 합니다.
	    2.search 함수의 탐색 범위 조정 문제
        else if (total == m) result = mid;는 불필요합니다.
        어차피 total >= m인 경우 덜 잘라야 하므로 result = mid; start = mid + 1;를 수행해야 합니다.
        */
    }
    return result;
}

int main(){
    int n, m;

    scanf("%d %d", &n ,&m);
    int *arr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int result = search(arr, n, m);

    printf("%d\n", result);

    free(arr);

    return 0;
}