#include <bits/stdc++.h>
using namespace std;
struct Ralo {
    int a, b;
};

bool compare(Ralo A, Ralo B){
    if(A.a == B.a) return A.b < B.b;
    return A.a < B.a;
}

int main(){
    Ralo a[3]= {{1,2}, {1,3}, {0,4}};
    sort(a, a+3, compare);
    for(Ralo A : a) cout<<A.a<<" : "<<A.b<<'\n';
    return 0;
}