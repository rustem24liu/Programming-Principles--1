#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    map <int, int> m;
    int n;
    while(cin >> n){
        //  if(n == 0) break;
        m[n]++;
    }
    int cnt = 0;
    map <int, int> :: iterator it = m.begin();
    for(it; it!=m.end(); ++it){
        if(it->second >= 3) cnt+=it->second;
    }
    cout << cnt;
}