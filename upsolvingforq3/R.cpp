#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s;
    char c;
    cin >> s >> c;
    int cnt = 0;
    vector <int> v;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == c) v.push_back(i);
    }
    if(v.size() == 1){
        cout << v[0] << " ";
    }
    else {
        cout << v[0]  << " " << v[v.size()-1];
    }
}
