#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin );
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map <string , int> m;
    for(int i = 0; i< n; i++){
        string s;
        cin >> s;
        if(m[s] == 0){
        cout <<  "new user added" << endl;
        m[s]++;
        }
        else{ cout << "user already exists" << endl;
    }
    }
    
}
