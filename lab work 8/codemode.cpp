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
    /*sort(v.begin(), v.begin()+m-1);
    sort(v.begin() + m, v.end(), greater<int>());*/

    for(int i = 0; i< m-1; i++){
        for(int j = i+1; j< m-1; j++){
            if(v[i] > v[j]) swap(v[i], v[j]);
        }
    }
    for(int i = m; i< n-1; i++){
        for(int j = i+1; j<n-1;j++ ){
            if(v[i] < v[j]) swap(v[i], v[j]);
        }
    }
    for(int i = 0; i< n; i++){
        cout << v[i] << " ";
    }
}