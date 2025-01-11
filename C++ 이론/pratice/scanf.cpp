#include<bits/stdc++.h>
using namespace std;
char a[54][54];
int main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}