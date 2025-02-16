#include <stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int count=0;
    while(1){
        if(N==1)break;
        if(N%K==0){
            count++;
            N/=K;
            
        }else{
            count++;
            N--;
        }
    }

    printf("%d\n", count);
    return 0;
}