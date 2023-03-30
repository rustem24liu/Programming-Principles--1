#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair<string, string>> v;
    vector <int> res;
    for(int i = 0; i< n; ++i){
        string x; string y;
        cin >> x >> y;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        v.push_back({x, y});
    }
    for(int i = 0; i< v.size(); ++i){
        int r = stoi(v[i].first);
        int l = stoi(v[i].second);
        int sum = r+l;
        string s = to_string(sum);
        reverse(s.begin(), s.end());
        int d = stoi(s);
        res.push_back(d);
    }
    for(int i = 0; i< res.size(); ++i){
        cout << res[i] << endl;
    }
}
