#include <iostream>
#include <algorithm>
using namespace std;
char arr[36];
int Kinary(int n, int m){
    if(n < m){
        cout << arr[n];
        return 0;
    }
    Kinary(n/m, m);
    cout << arr[n%m];
    
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 48; i<58; i++){
        arr[i- 48] = i;
    }
    for(int i = 10; i<= 36; i++){
        arr[i] = i + 55;
    }
    Kinary(n, m);
}
