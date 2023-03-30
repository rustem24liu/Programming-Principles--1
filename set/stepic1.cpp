#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        if(s.insert(x).second) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}