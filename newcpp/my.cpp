#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i< n; ++i){
        for(int j = 0 ; j< n; ++j){
            arr[i][j] = 2*i+1;
        }
    }
    for(int i = 0; i< n; ++i){
        for(int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
