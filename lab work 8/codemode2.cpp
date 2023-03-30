#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n=1;
    while(n!=0){
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end() - 1);
    for(int i = 0; i< v.size()-1; i++){
        cout << v[i] << " " ;
    }
}