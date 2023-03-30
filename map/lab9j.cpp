#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string , int> m;
    for(int i = 0; i< n; i++){
        string s;
        int x;
        cin >> s >> x;
        m[s]= m[s] + x;
    }
    map <string , int> :: iterator it;
    for(it = m.begin(); it!= m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
}

