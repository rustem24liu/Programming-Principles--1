#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    for(int i = 0; i< s.size(); i++){
        if(!(s[i] >= '0' && s[i] <= '9' )){
            cout << s[i];   
        }
        if(s[i] == ' ') cout << endl;
    }

}