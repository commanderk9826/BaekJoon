#include <stdio.h>

//반복문으로 구현
int search(int arr[], int target, int start, int end){
    while(start<=end){
        int mid =(start+end)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
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