/*접근방법
C++의 자료형 사용
삼중자(Trigraph Sequence)-> 일부 언어궈 문자셋 중에서 C언어의 표준 문자셋을
받아들이지 못하는 문제로인해 C언어에서 사용하는 표현식을 쓰지 못하는 경우가
발생하여 위와 같은 문자 셋을 만듦.
이중자

삼중자, 이중자가 주어질 때 출력하는 방법 : 물음표 사이에 역슬래시(\)을 넣으면 해결됨.
??! -> ?\?!
*/
#include <iostream>
using namespace std;

int main(void){
    string s;
    cin>> s;
    cout<<s<<"??!";
    return 0;
}