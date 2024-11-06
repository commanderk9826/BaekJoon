#include <iostream>
//첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
/*첫째 줄에 (A+B)%C, 
둘째 줄에 ((A%C) + (B%C))%C, 
셋째 줄에 (A×B)%C, 
넷째 줄에 ((A%C) × (B%C))%C를 출력한다.*/
using namespace std;

int main(void){
    int A, B, C;
    cin>>A>>B>>C;
    cout<<(A+B)%C<<endl;
    cout<<((A%C) + (B%C))%C<<endl;
    cout<<(A*B)%C<<endl;
    cout<<((A%C)*(B%C))%C<<endl;
}