#include <bits/stdc++.h>
using namespace std;
const int n =6;
vector<int> adj[n];
int visited[n];
void DFS(int u){
    visited[u]=1;
    cout<<u<<"\n";
    for(int v:adj[u]){
        if(visited[v]==0) DFS(v);
    }
    cout<< u << "로 부터 시작된 함수가 종료되었습니다."<<"\n";
    return;
}

//돌다리를 두들겨보다
void DFS1(int here){
    visited[here]=1;
    for(int there : adj[here]){
        if(visited[there]) continue;// visited[there] = 1 : 방문이 되어있다면, 방문을 하지 않고, 방문을 하는 코드
        DFS(there);
    }
}

//못 먹어도 GO
void DFS2(int here){
    if(visited[here]) return; // 일단 DFS를 호출하고 방문되어있다면,  return를 해 함수를 종료시키는 코드
    visited[here]=1;
    for(int there : adj[here]){
        DFS(there);
    }
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    DFS(1);
    return 0;
}