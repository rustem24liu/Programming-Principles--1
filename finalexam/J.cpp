#include <bits/stdc++.h>
using namespace std;
int main(){
    string x , y;
    cin >> x >> y;
    if(x == y) cout << "0";
    string f = x;
    string g = y;
    sort(f.begin(),  f.end());
    sort(g.begin(), g.end());
    if(f != g) cout << "Understandable have a nice day";
    deque <char> d1;
    deque <char> d2;
    for(int i = 0; i< x.size(); ++i){
        d1.push_back(x[i]);
    }
    for(int j = 0; j< y.size(); ++j){
        d2.push_back(y[j]);
    }
    for(int i = 0; i< d1.size(); ++i){
        d2.push_back(d2.front());
        d2.pop_front();
        if(d1 == d2 && x!=y){
            cout << i+1;
        }
    }

}