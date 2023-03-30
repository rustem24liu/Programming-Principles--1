#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, d;
    char c;
    cin >> s >> d >> c;
    for(int i = 0; i< s.size(); i++){
        for(int j =  0; j< d.size(); j++){
            if(s[i] == d[j]) s[i] = c;
        }
    }
    for(int i = 0; i< s.size(); i++){
        cout << s[i];
    }
}