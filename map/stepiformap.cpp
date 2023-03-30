#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> m;
    for(int i = 0; i< n; i++){
        string x, y;
        cin >> x >> y;
        m.insert({x, y});
    }
    map <string, string> :: iterator it;
    string d;
    cin >> d;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).first == d) cout << (*it).second;
        if((*it).second == d) cout << (*it).first;

    }
}
