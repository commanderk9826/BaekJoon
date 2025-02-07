/*
1. 현재 시간(H:M)에서 45분을 빼야 함.
M>=45 : M-45
M<45 : H-1, 60-M

2. 시간(H)이 0이면, 1시간을 뺴면 23시가 돼야 함.
H=0, M=30 -> H=23, M=45
*/
#include <stdio.h>

int main(){
    int H, M;
    scanf("%d %d", &H, &M);

    M-=45;
    if(M<0){
        M+=60;
        H-=1;
        if(H<0){
            H=23;
        }
    }
    printf("%d %d", H, M);
    return 0;
}