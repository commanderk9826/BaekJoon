/*
순열 : permutation이란 순서가 정해진 임의의 집합을 다른 순서로 섞는 연산
next_permutation : 오름차순의 배열을 기반으로 순열을 만듦  
-> 사용시 주의사항 : 반드시 배열을 오름차순으로 정렬한 후 사용해야 함
-> 원리 : 새로운 순열이 이전 순열보다 사전순으로 큰 경우 true를 반환하고, 마지막 순열에 도달해 범위가 첫번째 순열로 재설정된 경우 false를 반환함

prev_permutation : 내림차순의 배열을 기반으로 순열을 만듦
*/
#include <bits/stdc++.h>
using namespace std;
/*void printV(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int a[3]={1,2,3};
    vector<int> v;
    for(int i=0; i<3;i++) v.push_back(a[i]);
    // 오름차순으로 순열 뽑기
    do{
        printV(v);
    }while ((next_permutation(v.begin(), v.begin()+2)));//[first, last)
    cout<<"----------"<<"\n";
    v.clear();
    for(int i=2; i>=0;i--) v.push_back(a[i]);
    // 내림차순으로 순열 뽑기
    do{
        printV(v);
    }while ((prev_permutation(v.begin(), v.end())));

    return 0;
}*/

/*
재귀를 이용한 순열
depth : 트리의 레벨이자 높이
*/

/*int a[3]={1,2,3};
int n=3, r=3;
void print(){
    for(int i=0; i<r;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void makePermutation(int n, int r, int depth){
    if(r==depth){//기저사례
        print();
        return;
    }
    for(int i = depth; i<n; i++){
        cout<<i<<" : "<< depth <<"를 바꾼다!\n";
        swap(a[i], a[depth]);
        makePermutation(n, r, depth+1);
        cout<<i<<" : "<< depth <<"를 다시 바꾼다!\n";
        swap(a[i], a[depth]);
    }
    return;
}

int main(){
    makePermutation(n ,r, 0);
    return 0;
}*/

/*
조합 : 순서따윈 상관없고 오로지 몇명을 다양하게 뽑을 지 사용하는 것
4개 이상 -> 재귀
3개 이하 -> 중첩for문
*/

/*재귀 : 4개 중에서 2개를 뽑고, 인덱스를 출력하는 함수
int n=4, k=2, a[5]={1,2,3,4};

void print(vector<int> b){
    for(int i:b)cout<<i<<" ";
    cout<<'\n';
}

void combi(int start, vector<int> &b){
    if(b.size() == k){//기저사례
        print(b);
        return;
    }

    for(int i = start +1; i<n;i++){
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
}*/

int n=5, k=3, a[5]={1,2,3,4,5};
int main(){
    /*for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                cout<<i<<" "<< " "<<k<<'\n';
            }
        }
    }*/
   for(int i =0; i< n; i++){
        for(int j=0; j<i; j++){
            for(int k=0; k<j; k++){
                cout<< i << " "<< j << " " << k << "\n";
            }
        }
   }
    return 0;
}