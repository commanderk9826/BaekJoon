#include <bits/stdc++.h>
using namespace std;
int cnt, n;
const int INF =1e6;

int main(){
    cin >> n;
    /*for(int i=2400; i<INF; i++){
        string a = to_string(i);
        if(a.find("2400")!=string::npos){
            cnt++;
            if(n == cnt){
                printf("%d번째 랄로의 숫자 : %d\n", n, i);
                break;
            }
            cout<< cnt << " : "<< a<< "\n"; 
        }
    }*/

    int i=2400;
    while(true){
        string a = to_string(i);
        if(a.find("2400")!=string::npos){
            cnt++;
            if(n==cnt){
                printf("%d번째 랄로의 숫자 : %d\n", n, i);
                break;
            }
            cout<< cnt << " : "<< a<< "\n"; 
        }
        i++;
    }
    return 0;
}