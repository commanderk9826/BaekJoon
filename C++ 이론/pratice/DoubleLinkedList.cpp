#include <bits/stdc++.h>

using namespace std;

list<int> a;
void print(list <int> a){
    for(auto it : a) cout<< it << " ";
    cout << '\n';
}

int main(){
    for(int i = 1;i <=3; i++) a.push_back(i);//123
    for(int i = 1;i <=3; i++) a.push_front(i);//321123

    auto it = a.begin(); it++;
    a.insert(it, 1000);//3 1000 21123
    print(a);

    it = a.begin(); it++;
    a.erase(it); //321123
    print(a);

    a.pop_front(); //21123
    a.pop_back(); // 2112
    cout << a.front() << " : "<< a.back() << '\n';
    a.clear();
    return 0;
}