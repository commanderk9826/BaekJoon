#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;

int main(){
    vector<int> v = {1, 1, 2, 3, 3, 4};
    for (int i = 0; i < v.size(); i++) {
        int a = v[i];
        if (mp[a]) {
            continue; // mp[v[i]]가 이미 존재하면 continue
        } else {
            mp[a] = 1; // mp에 v[i] 값을 키로 추가
        }
    }
    /*for(int i : v){
        if(mp[i]){
            continue;//mp[i]가 있다면 continue
        }else{
            mp[i]=1;
        }
    }*/
    vector<int> ret;

    for(auto it : mp){
        ret.push_back(it.first);//map의 fist:key, second:value
    }
    for(int i : ret) cout<<i<<'\n';
}


