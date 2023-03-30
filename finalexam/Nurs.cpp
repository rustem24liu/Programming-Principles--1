#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v;
    vector <string> v2;
    for(int i = 0; i< n; ++i){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int m;
    cin >> m;
    for(int i =0 ; i< m; ++i){
        string d;
        cin >> d;
        v2.push_back(d);
    }
    // cout << endl;
    vector <string> res;
    for(int i =0; i< v.size(); ++i){
        if(v[i] !=v2[i]) cout << v[i] << endl;
    }
    // cout << res.size(); // Нурсултан черный мнау жай размерго аласнба коресн енды
}