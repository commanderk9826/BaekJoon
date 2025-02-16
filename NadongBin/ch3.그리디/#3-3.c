#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int *)b-*(int *)a);
}

int main(){

    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    int data[N];

    for(int i=0;i<N;i++){
        scanf("%d", &data[i]);
    }
    qsort(data, N, sizeof(int), compare);
    int first = data[0];
    int second = data[1];

    // 가장 큰수가 더해지는 횟수
    int count = (M/(K+1))*K;
    count += M%(K+1);

    int answer =0;
    answer+=(count)*first;
    answer+=(M-count)*second;

    printf("%d", answer);
}