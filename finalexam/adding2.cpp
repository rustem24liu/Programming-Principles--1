#include <bits/stdc++.h>
using namespace std;
int funct(int x){
    int result = 0;
    while(x != 0){
        int remainder = x % 10; 
        result = result * 10 + remainder;
        x/=10;
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    int t;
    vector <int> v;
    for(int i=0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        t = funct(x) + funct(y);
        v.push_back(funct(t));
    }
    for(int i  = 0; i< v.size(); ++i){
        cout << v[i] << endl;
    }
    
}