#include<bits/stdc++.h>
using namespace std;

struct Point2{
    int y, x;// 구조체의 멤버변수 정의
    Point2(int y, int x) : y(y), x(x){} // y,x를 받아 멤버변수 생성
    Point2(){y=-1; x=-1;} // y,x가 정해지지 않은 경우 기본값은 -1를 설정
    bool operator < (const Point2 & a) const { // 연산자 오버로딩 -> x가 1순위, y가 2순위로 "오름차순"으로 정렬됨
        if(x==a.x) return y<a.y;
        return x<a.x;
    }
};

struct Point3{
    int y, x, z;// 구조체의 멤버변수 정의
    Point3(int y, int x, int z) : y(y), x(x), z(z){} // y,x,z를 받아 멤버변수 생성
    Point3(){y=-1; x=-1; z=-1;} // y,x, z가 정해지지 않은 경우 기본값은 -1를 설정
    bool operator < (const Point3 & a) const { // 연산자 오버로딩 -> x가 1순위, y가 2순위로, z가 3순위로 "오름차순"으로 정렬됨
        if(x==a.x) {
            if(y==a.y) return z<a.z;
                return y<a.y;
        }
        return x < a.x;
        }
};

bool compare(string a, string b){
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main(){
    string a[3]={"111", "222", "33"};
    sort(a, a+3, compare);
    for(string b : a) cout << b << " ";
    return 0;
}