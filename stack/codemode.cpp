#include <iostream>
#include <queue>
using namespace std;
int main(){
    string n;
    cin >> n;
    queue <int> s;
    for(int i = n.size()-1; i>= 0;--i){
        if(s.empty()) s.push(n[i]);
        if(s.back() == '1' && n[i] == '1') s.pop();
        else{
            s.push(n[i]);
        }
    }
    while(!(s.empty())){
        cout << s.front() << " ";
        s.pop();
    }

}