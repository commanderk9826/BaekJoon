#include <stdio.h>
#define MAX 1000
int n, m;
int graph[MAX][MAX];
int visited[MAX][MAX];

void dfs(int x, int y){
    if(x<0||y<0||x>=n||y>=m) return;

    if(graph[x][y]==0&&visited[x][y]==0){
        visited[x][y]=1;
        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x,y-1);
        dfs(x,y+1);
    }
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++){
        char row[MAX];
        scanf("%s", row);
        for(int j=0; j<m;j++){
            graph[i][j]=row[j]-'0';
            visited[i][j]=0;
        }
    }

    int count=0;

    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if(graph[i][j]==0&&visited[i][j]==0){
                count++;
                dfs(i, j);
            }
        }
    }

    printf("%d\n", count);
    return 0;
}