#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string , int> mp;
    pair <string , int> p;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        string x;
        int y;
        cin >> x >> y;
        p  = {x, y};
        //mp[x] = y;
        mp.insert(p);
    }
    map <string , int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout <<(*it).first << " " << (*it).second << endl;
            }
    
}
