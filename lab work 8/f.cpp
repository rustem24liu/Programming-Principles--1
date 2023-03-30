#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i= 0; i< n; i++){
        int x;
        cin >> x;
    v.push_back(x);
    }
    int index, m;
    cin >> index >> m;
    v.insert(v.begin() + index, m);
   
     for(int i= 0; i<n+1; i++){
        cout << v[i] << " ";
    }
}