#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    int n = 196;
    int b = 16;
    while(n > 1){
        v.push_back(n % b);
        n /= b;
    }

    if(n == 1)v.push_back(1);
    reverse(v.begin(), v.end());
    
    for(int a : v){
        if(a >= 10){// if(a >= 10) 이 조건은 16진법 변환을 위해 필요함.
            cout << char(a + 55); // (16진법 : 0 ~ F로 표현하는 방법), 타입변환, 아스키코드
        }
        
        else cout << a;
    }
    return 0;
}