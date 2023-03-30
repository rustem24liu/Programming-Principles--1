#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int second = n % 60;
    int minute = n / 60 % 60;
    int hour = (n / 3600) % 24;
    cout << hour << ":" << minute / 10 << minute % 10 <<":" << second/10 << second %10;
}