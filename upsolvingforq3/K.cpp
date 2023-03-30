#include <bits/stdc++.h>
using namespace std;
int main(){
    string n, t;
    cin >> n;
    for(int i = n.size()-1; i >= 0; --i){
        t += n[i];
    }
    int s = 0;
    for(int i = 0; i< t.size(); ++i){
        s += ((t[i] -'0') * pow(2, i));
    }
    cout << s;

}