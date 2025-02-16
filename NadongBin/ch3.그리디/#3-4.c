#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    return (*(int *) a - *(int *) b);
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    int data[N][M];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &data[i][j]);
        }
    }

    int answer=INT8_MIN;

    for(int i=0; i<N;i++){
        qsort(data[i], M, sizeof(int), compare);
        int min_value = data[i][0];

        if(min_value>answer) answer=min_value;
    }

    printf("%d", answer);

    return 0;
}