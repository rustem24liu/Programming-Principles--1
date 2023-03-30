#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <int> b;
    for(int i = 0; i< n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
        b.push_back(x);

    }

    reverse(v.begin(), v.end());
    if(v == b) cout << "Polindrom";
    else{
        cout << "POlindrom EMES";
    }

}