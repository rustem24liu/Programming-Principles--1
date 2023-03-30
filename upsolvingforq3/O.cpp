#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 1,cnt1 = 0;
    char c;
    if(s.length()==1){
        cout << s << " " << 1;
        return 0;
    }
    for(int i=1;i<s.length();i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        if(cnt > cnt1){
            cnt1 = cnt;
            c = s[i-1];
        }
        if(s[i] != s[i-1]){
            cnt = 1;
        }
    }
    cout << c << " " << cnt1;
}