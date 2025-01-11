#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v = {{0, 0, 1, 1}, {1, 0 ,1}, {0, 1, 0}};

int main(){
    int n = v.size();
    int m = v[0].size();
    cout<< n <<", "<<m<<'\n';
    for(int i = 0; i<n; i++){
        for(int j =0; j <m; j++){
            cout << v[i][j] << " ";
        }
        cout<< "\n";
    }
    return 0;
}