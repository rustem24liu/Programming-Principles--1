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
    //sort(v.begin(), v.end());
    //cout << v[n-m];
    sort(v.begin(), v.end(), greater <int>());
    cout << v[m-1];
}