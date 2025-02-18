#include <stdio.h>
#include <string.h>

int main(){
    int x, y, nx, ny, count=0;
    char input[3];

    scanf("%s", input);

    //입력값을 숫자로 변환
    y=input[1]-'0';
    x=input[0]-'a'+1;

    int dx[8]={2, 2, 1, -1, -2, -2,-1, 1};
    int dy[8]={-1, 1, 2, 2, 1, -1, -2, -2};

    for(int i=0;i<8;i++){
        nx=x+dx[i];
        ny=y+dy[i];

        if(nx<1||ny<1||nx>8||ny>8) continue;
        count++;
    }
    
    printf("%d", count);
    return 0;
}