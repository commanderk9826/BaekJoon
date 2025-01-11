#include <bits/stdc++.h>
using namespace std;

string dopa = "umzunsik";

void print(string txt){
    cout << txt <<'\n';
}

int main(){

    //Q1. 앞에서부터 3개의 문자열을 출력하라.
    string dopa1 = dopa.substr(0,3);
    print(dopa1);

    //Q2. 해당 문자열을 거꾸로 해서 출력하라.
    reverse(dopa1.begin(), dopa1.end());
    print(dopa1);

    //Q3. 거꾸로된 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라.
    cout<<dopa1+dopa<<'\n';
    return 0;
}