#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> ingrd;
    for(int i = 0; i< n; ++i){
        string x;
        cin >> x;
        ingrd.push_back(x);
    }    
    vector <pair <string, string>> v;
    int m;
    cin >> m;
    for(int i =  0; i< m; ++i){
        string first; string second;
        cin >> first >> second;
        v.push_back({first, second});
    }
    string last;
    cin >> last;
    set <string> s;
    for(int i = 0; i< v.size(); ++i){
        if(last == v[i].first) s.insert(v[i].second);
        else if(last == v[i].second) s.insert(v[i].first);
    }
    cout << s.size() << endl;
    set <string> :: iterator it = s.begin();
    for(it; it!=s.end(); ++it){
        cout << *it << " ";
    }
}