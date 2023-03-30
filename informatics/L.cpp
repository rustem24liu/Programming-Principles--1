#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    cin >> m;
    int x = 0;
    for(int i = 0; i< n; ++i){
        if(m <=arr[i]) x = i+1;
    }
    cout << x+1;
}