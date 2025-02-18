#include <stdio.h>
#define MAX 200
int n, m;
int graph[MAX][MAX];
int visited[MAX][MAX];
int dist[MAX][MAX];

int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

typedef struct{
    int x;
    int y;
} Position;

Position queue[MAX*MAX];
int front=0, rear=0;

//queue에 삽입
void enqueue(Position pos){
    queue[rear++]=pos;
}

//queue에서 꺼내기
Position dequeue(){
    return queue[front++];
}

void bfs(int X, int Y){
    Position start={X, Y};
    visited[X][Y]=1;
    dist[X][Y]=1;
    enqueue(start);

    // queue가 빌때까지 반복
    while(front<rear){
        // queue에서 원소 꺼내기
        Position current = dequeue();
        int x = current.x;
        int y = current.y;

        for(int i=0; i<4; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(nx<0||ny<0||nx>=n||ny>=m||graph[nx][ny]==0) continue;

            if(!visited[nx][ny]){
                visited[nx][ny]=1;
                dist[nx][ny]=dist[x][y]+1;
                Position next={nx, ny};
                enqueue(next);
            }
        }

    }

}

int main(){
    scanf("%d %d", &n ,&m);
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            scanf("%1d", &graph[i][j]);
        }
    }

    bfs(0,0);

    printf("%d\n", dist[n-1][m-1]);

    return 0;
}