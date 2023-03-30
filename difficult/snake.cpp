#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int cnt =1;
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            arr[i][j] = cnt;
            cnt++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i%2==0){
                cout << arr[i][j] << " ";
            }
            else {
                cout << arr[i][m-j-1] << " ";
            }
        }
        cout << endl;
    }
}