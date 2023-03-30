#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // int arr[n];
    // for(int i = 0; i< n; i++){
    //     cin >> arr[i];

    // }
    // rotate(arr + 1, arr+3, arr+ 4);
    // for(int i = 0; i< n; i++){
    //     cout << arr[i] << " ";

    // }
    vector <int> v;
    for(int i = 0; i< n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    rotate(v.end(), v.end()-2, v.begin());
    for(int i = 0; i< n;i++){
        cout << v[i] << " ";
    }
}