#include <bits/stdc++.h>
using namespace std;
const int n=3;
int a[n][n], visited[n][n];
const int dy[]={-1, 0, 1, 0};
const int dx[]={0, 1, 0, -1};

void go(int y ,int x){
    visited[y][x]=1;
    cout<<y<<": "<<x<<'\n';
    for(int i=0; i<4;i++){
        int ny=y+dy[i];
        int nx=x+dx[y];
        if(ny<0||ny>=n||nx<0||nx>=n) continue;// overflow, underflow 방지, 맵의 주어진 범위를 벗어나지 않게 하는 코드
        if(a[ny][nx]==0)continue;
        if(visited[ny][nx])continue;
        go(ny, nx);
    }
   
}

int main(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    go(0, 0);
}