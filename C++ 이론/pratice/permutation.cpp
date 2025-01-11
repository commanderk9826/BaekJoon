#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3] = {1, 2, 3};
    do{
        for(int i : a) cout<< i <<' ';
        cout<< '\n';
    }while(next_permutation(a, a+3)); // while(next_permutation(&a[0], &a[0]+3));
    
    cout << '\n';
    vector<int> v1 = {2, 1, 3};
    // sort(b.begin(), b.end());
    do{
        for(int i : v1) cout<< i <<' ';
        cout<< '\n';
    }while(next_permutation(v1.begin(), v1.end())); 

    // 5개중에 두개만 뽑는 경우
    cout << '\n';
    vector<int> v2 = {2, 1, 3, 100, 200};
    sort(v2.begin(), v2.end());
    do{
        for(int i = 0; i<2; i++){
            cout<< v2[i] <<' ';
        } 
        cout<< '\n';
    }while(next_permutation(v2.begin(), v2.end())); 

    // next_permutation의 원리
    cout << '\n';
    vector<int> v3 = {2, 1, 3};
    bool flag =1;
    sort(v3.begin(), v3.end());
    do{
        flag = next_permutation(v3.begin(), v3.end());
        cout<<"flag"<<flag<<'\n';
        for(int i : v3) cout<<i<<" ";
        cout<< '\n';
    }while(flag); 
}
