#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i< n.size(); ++i){
        sum += int(n[i]);
    }
    if(sum > 300) cout << "It is tasty!";
    else cout << "Oh, no!";
}