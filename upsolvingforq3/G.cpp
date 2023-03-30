#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string n;
    getline(cin , n);
    int s;
    cin >> s;
    char arr[s];
    for(int j = 0;j < s; j++){
        cin >> arr[j];
    }
    sort(arr, arr+s);
    for(int j = 0; j< s; j++){
        int cnt = 0;
        for(int i = 0; i< n.size(); i++){
            if(arr[j] == n[i]) cnt++;
        }
        cout << arr[j] << " - " << cnt << endl;
    }
}