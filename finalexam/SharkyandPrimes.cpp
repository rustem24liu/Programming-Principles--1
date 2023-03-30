#include <bits/stdc++.h>
using namespace std;
bool idPrime(int n){
    for(int i = 2; i< sqrt(n) + 1; ++i){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i = 2; i < n/2; ++i){
        if(idPrime(i) && idPrime(n-i)){
            cout << i << " " << n-i;
            return 0;
        }
    }
}