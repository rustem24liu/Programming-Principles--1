#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(!(s[i] >= '0' && s[i] <= '9' || s[i]>='A' && s[i] <= 'Z')) cout << s[i];
    }
}