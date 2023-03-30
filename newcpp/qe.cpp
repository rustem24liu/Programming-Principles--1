#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, max=0, i = 0, num;
    cin >> a;
    while (a>i){
        i++;
        cin >> num;
        if (num > max){
            max = num;
        }
    }
    cout << max;
}
    