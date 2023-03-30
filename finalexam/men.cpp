#include<iostream>
using namespace std;
int arr[9];
int main(){
    int n;
    while(cin >> n && n != 0){
        arr[n-1]++;
        // if(n == 999) break;
    }
    for(int i = 0;i < 9;i++){
        cout << arr[i] <<" ";
    }
    return 0 ;
}