// 탐색만 할 때는 dfs, 최단거리를 구해야 할 경우 bfs
dfs(int here){
    if(visited[here]) return;
    visited[here]=1;
    for(int there : adj[here]){
        dfs(there);
    }
}

bfs(int here){
    queue<int> q;
    visited[here]=1;
    q.push(here);
    while(q.size()){
        int here = q.front(); q.pop;
        for(int there : adj[here]){
            visited[there]=visited[here]+1;
            q.push(there);
        }
    }
}