/*
부품찾기
7-6.py풀이(계수정렬)
모든 원소의 번호를 포함할수 있는 크기의 리스트를 만들고, 리스트의 인덱스에 직접 접근하여 특정한 번호의 부품이 매장에 존재하는지 확인
*/

#include <stdio.h>

#define MAX_SIZE 1000

int main(){
    int n, m;

    // 부품 저장할 배열 선언, 0으로 초기화
    int arr[MAX_SIZE]={0};

    // 가게의 부품개수 입력
    scanf("%d", &n);

    // 가게의 부품 번호를 배열에 기록 -> 해당 번호의 부품이 존재함을 기록 + 부품번호 중복 고려
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[num]+=1;
    }

    // 손님이 요청한 부품 개수 입력
    scanf("%d", &m);

    // 손님이 요청한 부품 번호 확인 및 출력
    for(int i=0; i<m;i++){
        int num;
        scanf("%d", &num);
        if(arr[num]>=1) printf("yes ");
        else printf("no ");
    }

    return 0;
}