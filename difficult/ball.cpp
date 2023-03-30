/*#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string n;
    cin >> n;
    string m = n;
    reverse(m.begin(), m.end());
    if(m == n){
        cout << n << endl;
    }
    string c = "";
   
    if(m!= n)
    {for(int i = 0; i<n.length(); i++){
        c+=n[i];
        string v = c;
        reverse(v.begin(), v.end());
        if(v == c){
            cout << v << endl;
            
        }
        }
    
}
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string n;
    cin >> n;
    int l , r;
    cin >> l >> r;
    for(int i =0; i<l-1; i++ ){
        cout << n[i];
    }
    for(int i =r-1; i>=l-1; i--){
        cout << n[i];
    }
    for(int i = r; i<n.length(); i++){
        cout << n[i];
    }
}*/
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >>n;
    string m = "";
    for(int i = 0; i< n.length(); i++){
        if(n[i] >= '1' && n[i] <='9'){
            while(n[i] != 0){
                m = n[i]%2 + m
                n[i] /=2;

            }
            
        }
        cout << n[i];
    }

}
*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string n;
    getline(cin , n);
    int m;
    cin >> m;
    char arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    sort(arr, arr+ m);
    for(int i = 0; i < m; i++){
        int cnt = 0;
        for(int j = 0; j< n.length(); j++ ){
            if(n[j] == arr[i] ){
                cnt++;
            }
          

        }  
        //sort(arr, arr + m );
        cout << arr[i] << " - " << cnt << endl;
    }
    

}*/
/*#include <iostream>
using namespace std;
int main(){
string s,t = "";
getline(cin,s);
for(int i = 0; i > s.size(); i++){
    if(s[i]>= 'A' && s[i]<='Z'){
        t = s[i] + 1;
        if(s[i]=='Z'){
            cout<<"A";
        }
        else{
            cout<<t;
        }
    }
    else if(s[i]>= 'a' && s[i]<='z'){
        t = s[i] + 1;
        if(s[i]=='z'){
            cout<<"a";
        }
        else{
            cout<<t;
        }
    }
    else{
        cout<<s[i];
    }
}
}*/


