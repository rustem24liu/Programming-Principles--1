#include <iostream>
using namespace std;
int arr[101];
int gcdmax(int a, int b){
    int cnt = 0;
    while(a * b !=0){
        if(a > b) a%= b;
        else b%= a;
    }
    return a+ b;

}

int main(){
    // int a, b;
    int n;
    int gcd = 1;
    cin >> n;
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    // cout << gcdmax(a, b);
    for(int i = 0; i< n; ++i){
        for(int j = i+1; j< n; ++j){
            gcd = max(gcd , gcdmax(arr[i], arr[j]));
        }
    }
    cout << gcd;
}
