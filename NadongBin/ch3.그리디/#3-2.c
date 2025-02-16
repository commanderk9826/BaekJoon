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

    int answer=0;

    while(1){
        for(int i=0; i<K; i++){
            if(M==0)break;
            answer+=first;
            M--;
        }
        if(M==0)break;
        answer+=second;
        M--;
    }

    printf("%d", answer);
}