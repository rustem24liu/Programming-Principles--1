#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    getline(cin , n);
    string temp = "";
    string tem = "";
    for(int i = 0; i< n.size();++i){
        if(n[i] >= 'A' && n[i] < 'Z' || n[i] >= 'a' && n[i] < 'z'){
            temp = n[i] + 1;
            cout << temp;
        }
        if(n[i] == 'Z') cout << 'A';
        if(n[i] == 'z') cout << 'a';
        else if(!(n[i] >= 'A' && n[i] <= 'Z' || n[i] >= 'a' && n[i] <= 'z')) cout << n[i];
    }
}