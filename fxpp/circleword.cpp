#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(abs(x-y) < 180) cout << abs(x-y);
    else {
        cout << 360-abs(x-y);
    }
}