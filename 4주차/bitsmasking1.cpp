//비트마스킹을 이용한 경우의 수
#include <bits/stdc++.h>
using namespace std;
const int n =4;
int main(){
    string a[n]={"사과", "딸기", "포도", "배"};
    for(int i =0; i<(1<<n); i++){// (1 << n) = 16
        string ret="";
        cout<<i<<" : ";
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                ret +=(a[j]+" ");
            }
        }
        cout<<ret<<"\n";
    }
    return 0;
}