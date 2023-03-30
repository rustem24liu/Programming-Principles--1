#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i< m; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << n+m-s.size();
}