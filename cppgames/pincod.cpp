#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Upload the new parol for your phone: ";
    string s;
    cin >> s;
    cout << "Repeat the NEW PAROL: ";
    string n;
    cin >> n;
    if(s == n) cout << "OK, PAROL is succesfuly passed";
    else{
        cout << "THE PAROL is not true try one more time!";
    }
}