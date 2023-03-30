#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        string s; string f;
        cin >> s >> f;
        reverse(s.begin(), s.end());
        reverse(f.begin(), f.end());
        int r = stoi(s);
        int t = stoi(f);
        int res = r+t;
        string result = to_string(res);
        reverse(result.begin(), result.end());
        int wer = stoi(result);
        v.push_back(wer);
    }
    for(int i = 0; i< v.size(); ++i){
        cout << v[i] << endl;
    }
}