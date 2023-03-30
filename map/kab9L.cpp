#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    multimap <int, int> m;
    for(int i = 0; i< n; i++){
        int x, y;
        cin >> x >> y;
        m.insert(make_pair(x+y, i+1));
    }
    multimap <int, int> :: iterator it;
    for(it = m.begin(); it!= m.end(); it++){
        cout << (*it).second << " ";
    }
}