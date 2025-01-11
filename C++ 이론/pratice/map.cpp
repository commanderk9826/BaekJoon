#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a[] = {"주홍철", "이승철", "박종선"};
int main(){
    for(int i=0;i<3;i++){
        mp.insert({a[i], i+1}); //map에 {key, value}를 할당
        mp[a[i]]=i+1;// [key]=value -> []를 통해 key에 해당하는 value을 할당
    }

    cout << mp["kundol"] << '\n';// map에 해당 키가 없다면 0으로 초기화 되어 할당됨(int의 경우)
    // 만약 map에 해당 키가 없는지 확인하고 싶고, 초깃값으로 0으로 할당되지 않아야 되는 상황이라면 find를 써야 함

    mp["kundol"] = 4; // key를 "kundol"로 value를 4로 할당
    cout << mp.size() << '\n';
    mp.erase("kundol");//해당 키에 해당하는 요소를 지움

    auto it = mp.find("kundol");//해당 key를 가진 요소를 찾아 이터레이터를 반환함
    if(it == mp.end()){//못 찾을 경우 해당 end() 이터레이터를 반환함
        cout << "못찾겠네 꾀꼬리\n";
    }

    mp["kundol"] = 100; // key를 "kundol"로 value를 100로 할당
    it = mp.find("kundol");
    if(it != mp.end()){
        cout << (*it).first << " : " << (*it).second << '\n'<<'\n';// key는 first, value는 second로 참조가능(pair처럼)
    }

    // map은 자동으로 오름차순 정렬되기 때문에, 넣은 순서대로 map를 탐색할 수 있는 것이 아닌, 아스키코드 순으로 정렬된 값들을 기반을 탐색하게 됨
    for(auto it : mp){// 범위기반 for 루프
        cout << (it).first << " : " << (it).second << '\n';
    }

    for(auto it = mp.begin(); it != mp.end(); it++){//map에 있는 요소들을 이터레이터로 순회
        cout << (*it).first << " : " << (*it).second << '\n';
    }
    mp.clear();//map에 있는 요소들 전부 제거
    return 0;
}

