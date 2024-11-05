#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "love is";
    a += " pain!";
    a.pop_back(); // ! 제거
    cout << a << " : "<< a.size() << "\n"; // love is pain : 12 출력
    cout << char(* a.begin()) << '\n'; // a문자열 첫 번째 출력
    cout << char(* (a.end() - 1 )) << '\n';// a문자열 뒤에서 두번째 출력

    a.insert(0, "test "); // 특정위치에 문자열 삽입
    cout << a << " : "<< a.size() << "\n";// a문자열, 12+5 출력

    a.erase(0, 5); // 특정위치에 크기만큼 문자열을 지움
    cout<< a << " : "<<a.size() << "\n"; // 원래 상태로 돌아옴

    auto it = a.find("pain"); // 특정문자열을 찾아 위치를 반환함.
    if(it != string::npos){
        cout << "포함되어 있다."<< '\n';
    }
    cout << it << '\n';
    cout << string::npos <<'\n';
    cout << a.substr(5, 2) << '\n'; // 특정위치에서 크기만큼의 문자열을 추출함.
    
}