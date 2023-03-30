/*#include <bits/stdc++.h>
using namespace std;
int main (){
    char n;
    string m;
    cin >> n >> m;
    for(int i = 0; i < m.length(); i++){
        if(m[i] != n){
            cout << m[i];

        }
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int  main (){
    string n;
    int x = 0; 
    int y = 0;
    cin >> n;
    for(int i = 0; i< n.size(); i++){
        if(n[i] == 'B')
    }

}*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
        for(int j = i+1; j< n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j])
            }
        }
    }
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
}