#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s, g;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i<m; i++){
        int x;
        cin >> x;
        if(!(s.insert(x).second)) g.insert(x);

    }
    set <int> :: iterator it;
    for(it = g.begin(); it!=g.end(); it++){
        cout << *it << " ";
    }
}
