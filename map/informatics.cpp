#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool comp(pair<double, int , int> &p1,pair<double, int , int> &p2 ){
    if(p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main(){
    int  n;
    cin >> n;
    map <double, pair < int , int> > m;
    for(int i = 0; i< n; i++){
        int x, y;
        cin >> x >> y;
        double d = sqrt(pow(x, 2) + pow(y, 2));
        m.insert(make_pair(d, make_pair(x, y)));
    }
    vector <double, pair < int , int> >> v(m.begin(), m.end());

}