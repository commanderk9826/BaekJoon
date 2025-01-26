/*
원복의 기본 형태
go(int here){
    visited[there]=1;
    go(there);
    visited[there]=0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int visited[4];
vector<int> adj[4];
vector<int> v;
void print(){
    for(int i : v) cout << char(i+'A')<< " ";
    cout<<'\n';
}

void go(int idx){
    //기저사례
    if(v.size() == 3){
        print(); 
        cout<<"기저사례 만족\n";
        return;
    }

    for(int there : adj[idx]){
        if(visited[there]) continue; // 재방문 x
        visited[there]=1; // 방문처리
        v.push_back(there); // 경로에 추가
        cout<<"push_Back : there : "<<there<<'\n';
        for(int i:v)cout<<i<<" ";
        cout<<"\n";
        go(there); // 다음 정점으로 재귀적 탐색
        visited[there]=0; // 탐색 후 방문 상태 복구(원복)
        v.pop_back(); // 경로에서 해당 정점 제거(원복)
        cout<<"pop_Back : there : "<<there<<'\n';
        for(int i:v)cout<<i<<" ";
        cout<<"\n";
    }
}

int main(){
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(0);
    adj[2].push_back(1);
    adj[3].push_back(1);

    visited[0]=1;
    v.push_back(0);
    go(0);
    return 0;
}