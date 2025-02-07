#include <stdio.h>
#include <stdlib.h>
/*
순열(재귀+백트래킹)을 이용한 풀이
1. 9개의 숫자에서 7개를 선택하는 순열을 생성
2. 선택한 7개의 숫자의 합이 100인지 확인
3. 찾으면 오름차순 정렬을 하고 종료
*/
#define N 9
#define R 7

int a[N];

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void solve(){
    int sum=0;
    for(int i=0; i<R; i++){
        sum +=a[i];
    }
    if(sum==100){
        //오름차순 정렬 후 출력
        for(int i=0; i<R-1; i++){
            for(int j=i+1; j<R; j++){
                if(a[i]>a[j]){
                    swap(&a[i], &a[j]);
                }
            }
        }
        for(int i=0; i<R; i++){
            printf("%d\n", a[i]);
        }
        exit(0);//정답을 찾으면 프로그램 종료
    }
}

void make_permutation(int depth){
    if(depth == R){//7개 선택 완료
        solve();
        return;
    }

    for(int i=depth; i<N;i++){
        swap(&a[i], &a[depth]);//현재 위치와 i위치 변경
        make_permutation(depth+1);
        swap(&a[i], &a[depth]);//원래 상태로 복구(백 트래킹)
    }
}

int main(){
    for(int i=0; i<N;i++){
        scanf("%d", &a[i]);
    }
    make_permutation(0);//순열 생성 시작
    return 0;

}