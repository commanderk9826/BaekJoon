#include<bits/stdc++.h>
// 조합 for문 사용 9P2, sum-A-B=100
using namespace std;
int a[9];
int sum =0;
pair<int, int> ret;
vector<int> v;

void solve(){
    for(int i=0;i<9;i++){
        for(int j=i+1; j<9; j++){
            if(sum-a[i]-a[j] == 100){
                ret={i, j};
                return;
            }

        }

    }
}

int main(){
    for(int i=0; i<9;i++){
        cin >> a[i]; sum+=a[i];
    }
    cout <<'\n';
    solve();
    for(int i=0; i<9;i++){
        if(ret.first == i|| ret.second ==i) continue;// || : OR
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(auto i : v) cout<<i<<"\n";
    return 0;
}