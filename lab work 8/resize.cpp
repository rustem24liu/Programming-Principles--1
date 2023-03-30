#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.resize(n-m);
    int y;
    cin >> y;
    v.push_back(y);

    for(int i = 0; i< v.size(); i++){
        cout << v.at(i) << " ";
    }
}