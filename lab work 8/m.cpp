#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i= 0; i< n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int sum = 0;
    set <int> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        sum+=*it;
    }
    cout << sum;
}