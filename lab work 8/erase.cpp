#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.erase(v.begin()+3, v.begin()+4);
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }
}