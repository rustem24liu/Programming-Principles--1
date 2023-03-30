#include <bits/stdc++.h>
using namespace std;
int main(){
    int dec, pro = 1;
    string hextodec = "";
    cin >> dec;
    while(dec != 0){
        char ch;
        if(dec % 16 >= 10){
            ch = dec % 16 + 55;
        }
        else ch = dec % 16 + 48;
        hextodec += ch;
        dec /= 16;
        pro *= 10;
    }
    reverse(hextodec.begin(), hextodec.end());
    cout << hextodec << endl;
}