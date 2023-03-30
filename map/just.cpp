#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair <int, int> &p1 , pair <int, int> &p2){
    if(p1.first == p2.first) return p1.second > p2.second;
    return p1.second > p2.second;
}
int main(){
    int n;
    cin >> n;
    vector <pair <int , int> > v;
    for(int i = 0; i< n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    //cout << endl;
    sort(v.begin(), v.end());
    vector <pair <int, int> > :: iterator it;
    for(it = v.begin(); it!=v.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


}