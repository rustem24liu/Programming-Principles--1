#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    string t = "";
    string h = "";
    for(int i = 0; i< s.size(); i++){
        if((s[i] >= '0' && s[i] <= '9') || s[i-1] >= 'a' && s[i-1] <= 'z'){
            t+=s[i];
        }
        else {
            h+=s[i];
        }
    }
    cout << t ;
    cout << endl;
    cout << h;

}