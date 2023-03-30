#include <iostream>
#include <map>
using namespace std;
int main(){
    //freopen("inpuut.txt", "r" ,stdin);
    int n;
    cin >> n;
    map <string , string> m;
    for(int i = 0; i< n; i++){
        string login , password;
        cin >> login >> password;
        m[login] = password;
    }
    map <string , string> :: iterator it;
    int b;
    cin >> b;
    for(int i = 0; i< b;++i){
        string l, p;
        cin >> l >> p;
        if(m.find(l) == m.end()) cout << "login error" << endl;
        else{
            it = m.find(l);
            if((*it).second == p) cout << "correct password" << endl;
            else{
                cout << "password error" << endl;
            }
        }
    }
}