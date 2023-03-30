#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string n;
    cin >> n;
    set <char> s;
    vector <char> v;
    for(int i = 0; i< n.length(); i++){
        if(n[i] >= 'A' && n[i]<= 'Z') n[i] = n[i] +32;
        v.push_back(n[i]);
    }
    for(int i = 0; i< v.size(); i++){
        s.insert(v[i]);
    }
    cout << s.size() << endl;
    set <char> :: iterator it;

    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    


}