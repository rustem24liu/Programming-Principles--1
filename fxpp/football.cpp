#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int , int> m1;
    map <int , int> m2;
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    m1.insert({x, y});
    m2.insert({a, b});
    map <int, int> :: iterator it1;
    map <int, int> :: iterator it2;
    for(it1 = m1.begin(); it1 != m1.end(); ++it1){
        for(it2 = m2.begin(); it2 != m2.end(); ++it2){
            int res1 = it1->first + it2->second;
            int res2 = it2->first + it1->second;
            if(res1 > res2);
        }
    }
    

}