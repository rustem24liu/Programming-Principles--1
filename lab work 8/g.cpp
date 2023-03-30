#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <int> v;
    for(int i  = 0; i< n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    int cnt = 0;
    int dnt = 0;
    for(int i = 0; i< v.size(); ++i){
        if(v[i] > m){
            for(int j = 2; j< sqrt(v[i]); ++j){
                if(v[i]%j == 0) cnt++;
            
            if(cnt == 0) dnt++;
            }
            cnt = 0;
        }

    }
    cout << dnt;
}