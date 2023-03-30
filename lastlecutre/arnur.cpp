#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    do{
        cout << n << endl;
    }while(next_permutation(n.begin(), n.end()));
}