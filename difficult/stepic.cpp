/*#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    if(n>='a' && n<='z'){
        cout << char(n-32);
    }
    else if(n>='A' && n<='Z'){
        cout << char(n+32);
    }
    else{
        cout << n;
    }
}*/

/*#include <iostream>
using namespace std;
int main (){
    int cnt = 0;
    string n;
    cin >> n;
    for(int i = 0; i< n.length(); i++){
        for(int j = i+1; j< n.length(); j++){
            if(n[i] == n[j]){
                cnt++;
            }
        }
    }

    //cout << n.size();
    //cout << endl << cnt;
    if(cnt % n.length() == 0 || n.length() * 3 % cnt  == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

}*/


/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int cnt = 1;
	string n;
	getline (cin , n);
	for(int i = 0; i< n.length(); i++){
        if(n[i] == ' ') cnt++;
    }
    cout << cnt;
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main(){
	int cnt = 1;
	string n;
	getline(cin , n);
	for(auto c: n){
		if(c == ' '){
			cnt++;
		}
	}
	cout << cnt;
}*/

/*#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string n;
	cin >> n;
	string m = n;
	reverse(m.begin(), m.end());
	if(m == n){
		cout << "yes";
	}
	else{
		cout << "no";
	}
}
*/


/*#include <iostream>
#include <string>
using namespace std;
int main (){
	int cnt = 0;
	string m = "";
	string n;
	getline(cin , n);
	for(int i = 0; i<n.length(); i++){
		if(n[i] != ' '){
			cnt++;
		}
	}
	for(int i = 0; i< n.length();i++){
		
	
	while(cnt > 0){
		m+=n[i];
		cnt++;
	}
}
	cout << m;
}
*/
/*#include <iostream>
#include <algorithm>
using  namespace std;
void MaxNumber(int n, int m, int c, int v){
	int arr[] = {n,m,c,v};
	sort(arr, arr+4);
	cout << arr[0];
	
}
int main (){
	int n,m,c,v;
	cin >> n >> m >> c >> v;
	MaxNumber(n, m , c, v);
}
*/

/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void powerThenumber(double n, double m){
	cout << setprecision(5) << pow(n,m);
	
	
}
int main(){
	double n, m;
	cin >> n >> m;
	powerThenumber(n, m);
}
*/

/*#include <iostream>
using namespace std;
void Xor(int n, int m){
	cout << (n ^ m);
	
}
int main(){
	int n,m;
	cin >> n>> m;
	Xor(n,m);
}*/

/*#include <iostream>
using namespace std;
int main (){
	string n;
	getline(cin , n);
	int start = 0, end = 1, buffstart = 0, buffend = 0;
	for(int i = 0; i< n.size()+1; i++){
		if(n[i] == ' ' || n[i] == '/0'){
			buffend = i;
			if(buffend - buffstart > end - start){
				start = buffstart;
				end = buffend;
			}
			buffstart = i+1;
		}
		
	}
	for(int i = start; i< end; i++){
		cout << n[i];
	}
}*/


/*#include <iostream>
#include <algorithm>
using namespace std;
void Max(int n,int m, int c, int v){
	int arr[] = {n, m, c, v};
	sort(arr, arr+4);
	cout << arr[0];
	
	
}
int main (){
	int n, m, c, v;
	cin >> n >> m >> c >> v;
	Max(n, m, c, v);
}*/





















