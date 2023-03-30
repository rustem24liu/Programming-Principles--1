#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map <char, int> m;
    for(int i = 0; i< s.size(); ++i){
        if(m[s[i]] == 0)
        {
            cout << s[i];
            m[s[i]]++;
        }
    }
}