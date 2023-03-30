#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    map  <string, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i <n; i++){
        int x;
        string y;
        cin >> y >> x;
        mp[y] = x;
    }
    //sort(mp.begin(), mp.end());
    cout << endl;
    map <string, int> :: iterator it;
    for(it = mp.begin(); it!=mp.end(); ++it){
        cout << (*it).first << " " <<  (*it).second << endl;
    }
}