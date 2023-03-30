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
    for(int i = 0; i< n-3; i++){
        v.pop_back();
    }
    for(int i=  0; i< v.size(); i++){
        cout << v[i] << " ";
    }
}