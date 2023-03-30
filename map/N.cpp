#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int , int> m;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i< n; i++){
        for(int j = i+1; j< n; j++){
            if(m[(arr[i] ^ arr[j])] != 0) cnt++;

        }
    }
    cout << cnt;
}