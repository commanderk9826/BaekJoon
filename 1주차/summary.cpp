/*
누적합 : 요소들의 누적된 합의 의미로 어떠한 배열을 기반으로 앞에서 부터 요소들의 누적된 합을 저장해 새로이 배열을 만들어서 이를 활용하는 것을 말합니다.
이는 앞에서부터 더하는 prefix sum과 뒤에서 부터 더하는 sumfix sum 이 있지만 코딩테스트에는 prefix sum만 나오니 prefix sum만을 배우면 됩니다.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100004], b, c, psum[100004], n ,m;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }

    for(int i = 0 ; i < m; i++){cin >> b >> c;
        cout << psum[c] - psum[b - 1] << "\n";
    }

    return 0;
}

/*
sum[i] = psum[i - 1] + a[i];
누적합을 만들 때는 반드시 "1번째 요소부터" 만드는 것이 좋습니다. 왜냐면 i = i - 1 이부분이 있기 때문에 0부터 시작한다면 -1이 되기 때문입니다.

psum[c] - psum[b - 1]
그 다음 이렇게 빼기만 하면 A부터 B까지 구해라 라는 것을 쉽게 O(1)만에 할 수 있습니다.
*/ 

/*
구현 : 아주 쉬운 알고리즘. 말 그대로 문제를 구현.
*/
