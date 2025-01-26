#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1004];
int visited[1004];

// 레벨 순회 : BFS

// 후위 순회 : left -> right -> parent
void postOrder(int here){
    if(visited[here] == 0){
        if(adj[here].size() == 1) postOrder(adj[here][0]);// 자식노드 1개, left
        if(adj[here].size() == 2){ // 자식노드 2개
            postOrder(adj[here][0]);//left
            postOrder(adj[here][1]);//right
        }
        visited[here]=1;// parent
        cout << here << ' ';
    }

}

// 전위순회 : DFS : parent -> left -> right
void preOrder(int here){
    if(visited[here] == 0){
        visited[here]=1;
        cout << here << ' ';
        if(adj[here].size() == 1) preOrder(adj[here][0]);// 자식노드 1개, left
        if(adj[here].size() == 2){ // 자식노드 2개
            preOrder(adj[here][0]);//left
            preOrder(adj[here][1]);//right
        }
    }
}

// 중위 순회 : left -> parent -> right
void inOrder(int here){
    if(visited[here] == 0){
        if(adj[here].size() == 1){
            inOrder(adj[here][0]);// 자식노드 1개, left
            visited[here]=1;
            cout << here << ' ';
        } 
        else if(adj[here].size() == 2){
            inOrder(adj[here][0]);// 자식노드 1개, left
            visited[here]=1;
            cout << here << ' ';
            inOrder(adj[here][1]);//right
        }else{
            visited[here]=1;
            cout << here << ' ';
        }
    }
    
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    int root=1;
    cout<<"\n 트리 순회 : postOrder \n"; postOrder(root); memset(visited, 0, sizeof(visited));
    cout<<"\n 트리 순회 : preOrder \n"; preOrder(root); memset(visited, 0, sizeof(visited));
    cout<<"\n 트리 순회 : inOrder \n"; inOrder(root);
    return 0;
}