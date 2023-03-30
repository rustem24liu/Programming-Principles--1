#include <iostream>
#include <set>
using namespace std;
int main(){
    freopen("input.txt", "r" , stdin );
   // freopen("output.txt", "w" , stdout );

    int n;
    cin >> n;
    string s;
    set <int> m;
    for(int i = 0; i< n; i++){
        cin >> s;
        if(s == "ADD"){
            int x;
            cin >> x;
            m.insert(x);
        }
        else if(s == "COUNT"){
            cout << m.size() << endl;
        }
        else if(s== "PRESENT"){
            int x;
            cin >> x;
            if(m.find(x) == m.end()) cout << "NO" << endl;
            else cout << "YES" << endl;
        }

    }
}