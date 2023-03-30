#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string> q;
    for(int i =0; i< n; i++){
        int x;
        string s;
        cin >> x;
        if(x == 1){
            cin >> s;
        }
        if(x == 2){
            q.push(q.front());
        }
    }
    while(!(q.empty())){
        cout << q.front() ;
        q.pop();
    }
}