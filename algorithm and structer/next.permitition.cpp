#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    do{
       cnt++;
        // cout << s << endl;
    } while(next_permutation(s.begin() , s.end()));
    cout << cnt;
}