#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i= 0; i< n; i++){
        int x;
        cin >> x;
    v.push_back(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i<n; i++){
        if(v[i] == m){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}