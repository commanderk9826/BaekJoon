#include<bits/stdc++.h>
using namespace std;
struct Ralo{
    int a, b;
    double c, d, e;
};

void print(Ralo ralo){
    cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << '\n';
}  

int main(){
    Ralo ralo = {1, 1, 1, 1, 1};
    print(ralo);
    vector<Ralo> ret;
    ret.push_back({1, 2, 3, 4, 5});
    ret.push_back({1, 2, 3, 4, 6});
    ret.push_back({});
    ret.push_back({1, 3});
    for(Ralo ralo : ret){
        print(ralo);
    }
    return 0;
}