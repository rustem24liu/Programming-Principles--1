/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    for(int i = 0; i< n.length(); i++){
        if(n[i] >= 'a' && n[i] <= 'z'){
            cout << char(n[i] -32);
        }
        else {
            cout << n[i];
        }
    }
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main (){
    string n;
    string m;
    cin >> n >> m;
    //ort(n.begin(), n.end());
    //sort(m.begin(), m.end());
    //if(n == m ){
     //   cout << "YES";
     //   return 0;
    //}
    //cout << "NO";
    for(int i =0; i <n.length(); i++){
        if(n.find(m) != string::npos){
            cout << "YES";
            break;
        }
        else {
            cout << "NO";
            break;
        }
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    int sumeven = 0;
    int sumodd = 0;
    for(int i =0; i< n.length(); i++){
        if(i%2==0){
            sumeven  =sumeven + n[i];
        }
        else if(i%2!=0){
            sumodd = sumodd + n[i];
        }
    }
    if(sumeven == sumodd){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    int m, l;
    cin >> n >> m >> l;
    for(int i =m; i <= l; i++){
        cout << n[i];
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n, m;
    cin>> n >> m;
    if(n == m){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n, m;
    string a = n;
    string b = m;
    cin >> n >> m;
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());



    reverse(n.begin(), n.end());
    reverse(m.begin(), m.end());
    if(a == m || b == n || n == m){
        cout << "YES";

    }
    else{

        cout << "NO";
    }
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    int cnt = 0;
    for(int i =0; i< n.length(); i++){
        if(n[i] == 'a'){
            cnt++;
        }
        else if(n[i] == 'e'){
            cnt++;
        }
        else if(n[i] == 'u'){
            cnt++;

    }
        else if(n[i] == 'i'){
            cnt++;
        }
        else if(n[i] == 'o'){
            cnt++;
        }
        
}
cout << cnt;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
   // for(int i = 0; i< n.length(); i++){
     //   if(n[i] < n[i+1]){
       //     cout << "no";
         //   return 0;
       // }
    //}
      //  cout << "yes";


    string a =n;
    sort(n.begin(), n.end());
    if(a == n){
        cout << "YES";
    }  
    else{
        cout << "NO";
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    cout << "Welcome " + n;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    for(int i = 0; i< n.length(); i++){
        if(n[i] == 'z'){
            n[i] = 'a';
        }
        else if(n[i]>= 'a' && n[i] < 'z' ){
            n[i] = n[i] +1;


        }
            
        
        cout << n[i];

    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    char max = n[0];
    
    for(int i =0; i< n.length(); i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    cout << max;
    }
    */
/*#include <bits/stdc++.h>
using namespace std;
int main (){
	string n;
	cin >> n;
	string m = n;
	//char a =n[0];
	reverse(m.begin(), m.end());
	if(m == n){
		cout << "YES";
	}
	else {
		n.push_back(n[0]);
		string t = n;
		reverse(t.begin(), t.end());
		if(t == n){
			cout << "YES";
		}
		else{
			cout<< "NO";
		}
		
	}
}
*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	string n;
	char m;
	int cnt= 0;
	int t;
	cin >> n >> m >> t;
	for(int i = 0; i<n.length(); i++){
		if(n[i] == m){
			cnt++;
			
		}
	}
	if(cnt == t){
		cout << "YES";
	}
	else{
		cout << "NO";
	
		
	}
	
} */

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	string n,m;
    
	cin >> n >> m;
	if(m.size() % n.size()== 0 && m.find(n) != string::npos){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
   
}*/


#include <bits/stdc++.h>
using namespace std;
int main (){
    int cnt = 0;
    string n;
    cin >> n;
    for(int i = 0; i< n.length(); i++){
        for(int j = i+1; j < n.length(); j++ ){
            if(n[i] == n[j]){
                cnt++;
                
            }
        }   
}
cout << cnt << endl << n.length();

if(n.size() * 3 % cnt == 0 || cnt % n.size() == 0){
    cout << "YES";
}
else{
    cout << "NO";
}

}*/





