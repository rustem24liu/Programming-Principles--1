#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    map <string , int> m;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int x, y;
        string f;
        cin >> x;
        if(x == 1){
            cin >> f >> y;
            m[f] = m[f] + y;

        }
        else if(x == 2){
            cin >> f;
            m[f] = 0;

        }
        else if(x == 3){
            cin >> f;
            cout << m[f] << endl;
        }
    

    }

}