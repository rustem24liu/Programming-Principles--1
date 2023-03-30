#include <algorithm>
#include <vector>
#include <iostream>
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
    int m;
    cin >> m;
    sort(v.begin(), v.end(), greater <int>());
    int sum = 0;
    for(int i = 0; i<m; i++){
        sum+=v[i];
    }
    cout << sum;
    
}