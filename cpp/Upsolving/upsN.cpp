#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
    string c = to_string(arr[i]);
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i<n/2; i++){
        sum1 = c[i] + sum1;
    }
    for(int i = n-1; i>=n/2; i--){
        sum2 = c[i] + sum2;
    }
    cout << sum1 << endl << sum2;
    

}