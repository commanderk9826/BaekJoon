/*BFS(Breadth First Search)
1. 다음 깊이의 정점으로 이동하기전 현재 깊이의 모든 정점을 탐색
2. 방문한 정점은 다시 방문하지 않음
3. 같은 가중치를 갖는 그래프에서 최단거리알고리즘
*/


#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int visited[100];
int nodeList[]={10, 12, 14, 16, 18, 20, 22, 24};
void BFS(int here){
    queue<int> q;
    /*시작지점이 다수인 경우
    for(int i =1; i<=3; i++){
        visited[i]=1;
        q.push(i);
    }
    */

    visited[here]=1;//시작지점이 방문처리가 안되어 있으면, 로직이 추가되어야 하므로, 첫번째 지점에 1를 거는걸 기억하자 
    q.push(here);
    while (q.size()){
        int here = q.front();
        q.pop(); 

        for(int there : adj[here]){ 
            if(visited[there]) continue;
            visited[there] = visited[here]+1;//BFS가 레벨별로 탐색하는 Logic를 이용해 최단거리를 구함
            q.push(there);
        }
    }
}

int main(){
    adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);

    adj[12].push_back(18);
    adj[12].push_back(20);

    adj[20].push_back(22);
    adj[20].push_back(24);
    BFS(10);
    for(int i : nodeList){
        cout << i << " : "<<visited[i]<<'\n';
    }
    cout<<"10번으로부터 24번까지 최단거리는 : "<< visited[24]-1 <<'\n';
    return 0;
}
