/*
다이나믹 프로그래밍 문제 푸는 방법
1. 주어진 문제가 다이나믹 프로그래밍 유형임을 파악하는 것
-> 완전 탐색 알고리즘으로 접근했을 때 시간이 매우 오래 걸리면 다이나믹 프로그래밍을 적용할 수 있는지 해결하고자 하는 부분 문제들의 중복 여부를 확인
-> 재귀함수로 비효율적인 프로그램을 작성한 뒤에 작은 문제에서 구한 답이 큰 문제에서 그대로 사용될 수 있으면 즉, 메모이제이션을 적용할 수 있으면 코드를 개선

2. 가능하다면 재귀함수를 이용하는 Top-down 보다는 Bottom-up방식으로 구현하는 것을 권장
-> 시스템 상 재귀 함수의 스택 크기가 한정되어 있음
*/
// 피보나치 수열 by Bottom-up
#include <stdio.h>

#define MAX 100

int main(){
    int d[MAX]={0}; // DP테이블 초기화
    int n=6;// 구하고자 하는 피보나치 수

    d[1]=1;
    d[2]=1;

    // 반복문을 이용한 피보나치 수열 계산(Bottom-up 방식)
    for(int i=3; i<=n;i++){
        d[i]=d[i-1]+d[i-2];
        printf("%d\n", d[i]);
    }

    // n번째 피보나치 수 출력
    printf("%d\n", d[n]);

    return 0;
}
