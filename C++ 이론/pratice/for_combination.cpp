#include <bits/stdc++.h>
using namespace std;
int n = 5, k =3, a[5] = {1, 2, 3, 4, 5};

int main() {
    //5개 중 3개 뽑기
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                cout << i << " " << j << " " << k << '\n';
            }
        }
    }   
    cout<<'\n';
    //5개 중 2개 뽑기
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            cout << a[i] << " " << a[j] << " " <<'\n';
        }
    }   
    return 0;
}