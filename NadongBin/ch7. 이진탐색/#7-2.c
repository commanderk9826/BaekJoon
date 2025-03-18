/*
이진탐색(Binary Search)
배열 내부의 데이터가 정렬되어 있어야만 사용할 수 있는 알고리즘

확인하는 원소의 개수가 절반씩 줄어든다는 점에서 시간복잡도 : O(logN)
1. 재귀함수로 구현 
mid=(start+end)//2

2. 반복문으로 구현

3. 이진탐색트리
트리 자료구조에서의 데이터 탐색 시 
왼쪽 자식 노드 < 부모 노드 < 오른쪽 자식 노드
자식 노드가 없을 경우, 이진 탐색 트리에 원소가 없는 것
*/
#include <stdio.h>

//재귀 함수로 구현
int search(int arr[], int target, int start, int end){
    if(start > end){
        return -1;
    }

    int mid=(start+end)/2;

    if(arr[mid]==target){
        return mid;
    } else if(arr[mid]>target){
        return search(arr, target, start, mid-1);
    } else{
        return search(arr, target, mid+1, end);
    }
}

int main(){
    int n, target;
    

    printf("원소 개수와 찾을 값을 입력하세요: ");
    scanf("%d %d", &n, &target);

    int arr[n];

    printf("배열 원소를 입력하세요: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int start =0;
    int end = n-1;

    int result = search(arr, target, start, end);

    if(result == -1){
        printf("원소가 존재하지 않습니다.\n");
    } else{
        printf("%d\n", result+1);
    }

    return 0;
}
