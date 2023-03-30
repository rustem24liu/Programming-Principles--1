#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    queue <char> q;
    for(int i = 0; i< n.size(); ++i){
        if(!(n[i]>='a' && n[i]<='z' || n[i]>='0' && n[i]<='9')) q.push(n[i]);

    }
    if(q.size() == 2 && q.back() == '.' && n[0] >= 'a' && n[0] <= 'z'&& n[n.size()-1] >= 'a' && n[n.size()-1] <= 'z'){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}