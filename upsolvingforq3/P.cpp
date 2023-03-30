#include <iostream>
#include <string>
using namespace std;
string fall(string s){
    if(s.size() == 1){
    for(int i = 0; i< 1; i++){
        if(s[i] == '1') return "true";
        else if(s[i] == '0') return "false";
    }
    }
    else return s;
}

int  main(){
    string s;
    cin >> s;
    cout << fall(s);
}