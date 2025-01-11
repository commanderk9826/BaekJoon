#include<bits/stdc++.h>
using namespace std;
string str, ret;
int cnt[26], n;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>str;
        cnt[str[0]-'a']++;
    }

    for(int i=0; i <26; i++) if(cnt[i]>=5) ret += i + 'a';
    
    if(ret.size()){
        cout<<ret<<"\n";
    }else{
        cout<<"PREDAJA"<<"\n";
    }
    return 0;
}