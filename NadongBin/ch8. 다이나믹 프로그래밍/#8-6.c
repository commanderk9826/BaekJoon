/*
효율적인 화폐 구성
1.입력조건
첫째 줄에 N, M이 주어진다. N : 1~100, M : 1~10000
이후 N개의 줄에는 각 화폐의 가치가 주어진다. 화폐 가치는 10000보다 작거나 같은 자연수

2. 출력조건 
첫째 줄에 M원을 만들기 위한 최소한희 화폐개수를 출력한다.
불가능할 때는 -1를 출력한다.

입력예시1
2 15
2
3

출력예시1
5

입력예시2
3 4
3
5
7

출력예시2
-1
*/
#include <stdio.h>
#define INF 10001

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Step 0 : DP테이블 초기화
    int d[m+1];
    for(int i=0; i<=m; i++){
        d[i]=INF;
    }
    d[0]=0;

    // 다이나믹 프로그래밍 진행(Bottom-up)
    for(int i=0; i<n; i++){
        for(int j=arr[i]; j<=m;j++){
            if(d[j-arr[i]]!=INF){
                if(d[j]>d[j-arr[i]]+1){
                    d[j]=d[j-arr[i]]+1;
                }
            }
        }
    }

    // 계산된 결과 출력
    if(d[m]==INF){
        printf("-1\n");
    } else {
        printf("%d\n", d[m]);
    }

    return 0;
}