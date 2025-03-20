/*
바닥 공사
가로의 길이 : N
세로의 길이 : 2
바닥 : NX2

덮개 : 1X2, 2X1, 2X2

바닥을 채우는 모든 경우의 수
첫째 줄에 N이 주어진다.(1~1000)
2XN 크기의 바닥을 채우는 방법의 수를 796,796으로 나눈 나머지를 출력한다.

입력 : 3, 출력 : 5
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1001

int main(){
    int n;
    scanf("%d", &n);
    int d[MAX_SIZE];

    d[0]=1;
    d[1]=3;

    for(int i=2;i<n;i++){
        d[i]=d[i-1]+d[i-2]*2;
    }

    int answer=d[n-1]%796796;

    printf("%d\n", answer);
    return 0;
}


