#include <bits/stdc++.h>
using namespace std;
struct Point1{ // 내림차순 정렬
    int y, x;
    Point1(int y, int x) : y(y), x(x){}
    Point1(){y=-1; x=-1;}
    bool operator < (const Point1 & a) const {
        return x>a.x; 
    }
};
struct Point2{ // 오름차순 정렬
    int y, x;
    Point2(int y, int x) : y(y), x(x){}
    Point2(){y=-1; x=-1;}
    bool operator < (const Point2 & a) const {
        return x<a.x; 
    }
};
struct Point3{
    int y, x;
};
struct cmp{
    bool operator()(Point3 a, Point3 b){
        return a.x < b.x;
    }
};

priority_queue<Point1> pq1;
priority_queue<Point2> pq2;
priority_queue<Point3, vector<Point3>, cmp> pq3;
int main(){
    for(int i = 1; i < 7; i++){
            pq1.push({i, i});
            pq2.push({i, i});
            pq3.push({i, i});
    }
    cout<< pq1.top().x<<"\n";// 결과는 오름차순 정렬
    cout<< pq2.top().x<<"\n";// 결과는 내림차순 정렬
    cout<< pq3.top().x<<"\n";// 결과는 내림차순 정렬
    return 0;
}
