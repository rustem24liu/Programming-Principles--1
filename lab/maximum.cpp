#include <iostream>
#include <algorithm>
using namespace std;
int i = 0;  
int maxo(string n, int i){
    if(i == n.size()) return 0;
    return max((n[i] - 48), maxo(n, i+1));

}
int main(){
    string n;
    cin >> n;
    cout << maxo(n,i);

}