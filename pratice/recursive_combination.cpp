#include<bits/stdc++.h>
using namespace std;

int n= 4, k =2, a[4]={1, 2, 3, 4};
void print(vector<int> b){
    for(int i : b) cout<< a[i] << " ";
    cout << '\n';
}

void combi(int start, vector<int> &b){
    if(b.size() == k){//기저사례
        print(b);
        return;
    } 
    for(int i = start+1; i < n; i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}

/*void f(int start, vector<int> &b){
    if(b.size() == k ){//기저사례
        //logic
        return;
    }
    for(int i = start+1; i<n; i++){ 
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}*/

