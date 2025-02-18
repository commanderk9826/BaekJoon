#include <stdio.h>
#include <string.h>


int main(){
    int N;
    int count=0;
    char time[10];

    scanf("%d", &N);
    for(int i=0;i<N+1; i++){
        for(int j=0; j<60; j++){
            for(int k=0; k<60; k++){
                sprintf(time,"%d%d%d", i, j, k);

                if(strchr(time, '3')!=NULL) count++;
            }
        }
    }
    
    printf("%d, %s\n", count, time);
    return 0;
}