#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> m;
    for(int i = s.size()-1; i>=0; i--){
        if(m.empty()) m.push(s[i]);
        else if(m.top() == '1' && s[i] == '1') m.pop();
        else{
            m.push(s[i]);
        }
    }
    while(!(m.empty())){
        cout << m.top();
        m.pop();
    }
}