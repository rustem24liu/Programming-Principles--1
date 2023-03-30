#include <bits/stdc++.h>
using namespace std;
int main (){
    /*string n;
    cin >> n;
    for(int i = 0; i< n.length(); i++){
        if(n[i] >= 'a' && n[i] <='z'){
            
            //n[i] = n[i] -32;
            cout << char(n[i] - 32);
            //cout << n[i];
        }
        else{
            cout << n[i];
        }
 
    }*/

/*string n;
cin >> n;
for(int i = 0; i< n.length(); i++){
    if(n[i] >= 'a' && n[i] <= 'z'){
        cout << char(n[i] - 32);
    }
    else if(n[i] >= 'A' && n[i] <= 0-'Z'){
        cout << char(n[i] + 32);
        
    }
}*/

string n = "1234567890";
for(int i  =0; i < n.length(); i++){
    cout << n[i] << " ";
    cout << "int :" << n[i] - 48 << " ";

    cout << endl;
}
cout << endl;
}