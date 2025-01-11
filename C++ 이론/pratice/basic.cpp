#include <bits/stdc++.h>
using namespace std;
typedef int t;
#define PI 3.14159
#define loop(x, n) for(t x=0; x<n; x++)
int main(){
    cout << PI << '\n';
    t sum = 0;
    loop(i, 10){
        sum += i;
    }
    cout << sum << '\n';
    return 0; 
}