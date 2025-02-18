#include <stdio.h>
#define MAX_N 50
int n, m, x, y, d;
int map[MAX_N][MAX_N], visited[MAX_N][MAX_N];
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

void turn_left(){
    d-=1;
    if(d==-1)d=3;
}

int main(){
    scanf("%d %d", &n, &m);
    scanf("%d %d %d", &x, &y, &d);
    visited[x][y]=1;

    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            scanf("%d", &map[i][j]);
        }
    }

    int count=1;
    int turn_time = 0;

    while (1){
        turn_left();
        int nx=x+dx[d];
        int ny=y+dy[d];

        if(visited[nx][ny]==0&&map[nx][ny]==0){
            //visited[nx][ny]=1;//방문처리
            x=nx;
            y=ny;
            count++;
            visited[x][y]=1;
            turn_time=0;
            continue;//이동했으므로, 다음 스텝으로 가야함
        }else{
            turn_time++;
        }
        if(turn_time==4){
            nx=x-dx[d];
            ny=y-dy[d];
            if(map[nx][ny]==0){
                x=nx;
                y=ny;
                turn_time=0;
            }else{
                break;
            }
            //turn_time=0;같은역할 수행
        }
    }
    printf("%d\n", count);
}