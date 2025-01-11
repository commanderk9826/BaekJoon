#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<=1) return 0;//1이면 소수아님
    if(n == 2) return 1;//2이면 소수
    if(n % 2 == 0) return 0;//2의 배수이면 소수아님
    for(int i = 3; i*i <=n ; i++){
        if(n%i == 0) return 0; 
        //i=3일 때, 9이상의 수 중에서 3으로 나눠떨어지면 소수가 아님, 
        //i=4일 때, 16이상의 수중에서 4로 나눠떨어지면 소수가 아님.
    }
    return 1;
    //나머지의 경우는 소수
}

int main(){
    for(int i =1; i<=20; i++){
        if(check(i)){
            cout<<i<<"는 소수입니다.\n";
        }
    }
    return 0;
}