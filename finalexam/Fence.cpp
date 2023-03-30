#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    stack <int> s;
    for(int i = 0; i< n; ++i){
        int x;
        cin >> x;
        if(s.empty()) s.push(x);
        else if(s.top() <= x) s.pop();
        else{
            s.push(x);
        }
    }
    cout << s.size();
}