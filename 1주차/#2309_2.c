/*
완전탐색(2개의 숫자 제외)
1. 9개의 숫자의 합을 먼저 계산한다.
2. 두개의 숫자를 제외했을 때 합이 100이 되는 경우를 찾는다.
3. 제외한 숫자를 제외한 나머지 숫자를 오름차순 정렬후 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 9

int a[N], sum=0;

//두개의 숫자를 제외하고 출력
void print(int x, int y){
    int temp[N], idx=0;

    for(int i=0; i<N; i++){
        if(i!=x && i!=y){
            temp[idx++]=a[i];
        }
    }

    //오름차순 정렬
    for(int i=0; i<7-1;i++){
        for(int j=i+1;j<7;j++){
            if(temp[i]>temp[j]){
                int tmp = temp[i];
                temp[i]=temp[j];
                temp[j]=tmp;
            }
        }
    }

    //출력
    for(int i=0; i<7;i++){
        printf("%d\n", temp[i]);
    }

}

int main(){
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    //두개의 숫자를 제외하여 합이 100이 되는 경우
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(sum-a[i]-a[j]==100){
                print(i,j);
                return 0;
            }
        }
    }
}
