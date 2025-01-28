/*

*/
#include <bits/stdc++.h>
using namespace std;

/*
//idx번째 비트끄기(1->0) : S &=~(1 << idx)
int main(){
    int S = 18; // S = 10010
    int idx = 1;
    S &= ~(1 << idx); // 1 << idx = 00010 -> ~(1 << idx)=11101
    cout<< S << "\n"; // S = 10010 & 11101 = 10000 = 16
    return 0;
}
*/

/*
//idx번째 비트XOR연산(1->0, 0->1, Toggle) : S ^=(1 << idx)
//XOR연산자(^): 두 비트가 서로 다른 경우(1), 두 비트가 같은 경우(0)
int main(){
    int S = 18; // S = 10010
    int idx = 1; 
    S ^=(1 << idx); // 1 << idx = 00010
    cout<< S << "\n"; // S = 10010 ^ 00010 = 10000 = 16
    return 0;
}
*/

/*
//최하위 켜져있는 비트 찾기 : idx=(S&-S)
int main(){
    int S = 18; // S = 10010
    int idx = (S&-S); // -S = ~S+1 = 01101 + 1 = 01110
    cout<< idx << "\n";// idx = 10010 & 01110 = 00010 = 2
    return 0;
}
*/

/*
//크기가 n인 집합의 모든 비트를 켜기 : (1<<n)-1
int main(){
    int n=4;
    int S = (1<<n)-1;// (1<<n)= 10000, S=10000-1=1111
    cout<< S << "\n";
    return 0;
}
*/
/*
//idx번째 비트를 켜기 : S |=(1<<idx)
int main(){
    int S = 18; // S = 10010
    int idx = 0;
    S |= (1 << idx); //1 << idx = 00001 
    cout<< S << "\n"; // S = 10010 | 00001 = 10011 = 19
    return 0;
}
*/

//idx번째 비트가 켜져있는지 확인하기 : if(S&(1<<idx))
int main(){
    int S = 18; // S = 10010
    int idx = 1;
    if(S&(1<<idx)){
        cout<<"해당 idx : "<<idx<<"가 켜져있습니다.\n";
    }else{
        cout<<"해당 idx : "<<idx<<"가 꺼져있습니다.\n";
    }
    return 0;
}

