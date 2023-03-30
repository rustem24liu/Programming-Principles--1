#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int, int> m;
    map <int, int> :: iterator it;
    for(int i = 0 ;i< n; ++i){
        int x;
        cin >> x;
        for(int j = 0; j< x; ++j){
            int y;
            cin >> y;
            m[y]++;
        }
    }
}