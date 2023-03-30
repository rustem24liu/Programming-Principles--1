// 10th for binary
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin >> n;
    string s = "";
    while(n!=0){
        s = to_string(n%2)+s;
        n/=2;
        //cout << s;
    }
    cout << s;
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>> n;
    string s = "";
    while(n!=0){
        s = to_string(n%8) + s;
        n/=8;
    }
    cout << s ;

}*/

/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string m = "";
    char Next;
    int reminder = n%16;
    while(n!=0){
    if(reminder > 9){
        Next = char(reminder % 10 +65);
    }
    else{
        Next = char(n%1+48);

    }
    m = Next + m;
    n/= 16;
    }
    cout << m;
}*/

/*#include <iostream>
using namespace std;
int doubleNumber(int n){
	return n*2;

}

bool isLargerNumber(int n){
	return	n > 5;
}

char
int main (){
	//for(int i = 0; i<= 10; i++){
	//	cout << doubleNumber(i) << endl;
	//}

	for(int i = 0; i< 10; i++){
		cout << i << " ";
		cout << isLargerNumber(doubleNumber(i)) << endl;
		//cout << i ;
	}
}*/

/*#include <iostream>
using namespace std;
void sum(int n, int m){
	cout << n+m;
}
int main (){
	int n, m;
	cin>> n >> m;
	sum(n, m);
}
*/


/*#include <iostream>
using namespace std;

void Main(int n) {
	int arr[n];
	int brr[n];
	int crr[n];

	for(int i = 0; i< n; i++) {
		cin >> arr[i];
	}
	for(int j = 0; j< n; j++) {
		cin >> brr[j];
	}
	for(int k = 0; k< n; k++) {
		for(int i = 0; i< n; i++) {
			for(int j = 0; j<n; j++) {
				if(i == j && k == i) {
					crr[k] = (arr[i] - brr[j]);

				}
			}
			//cout << crr[k] <<" ";
		}
		cout << crr[k] << " ";
	}

}
int main () {
	int n;
	cin >> n;

	Main(n);
}
*/
/*#include <iostream>
using namespace std;
void Main(int n){
	int arr[n];
	int brr[n];
	int cnt = 0;
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	for(int j = 0; j< n; j++){
		cin >> brr[j];
		}
	for(int i = 0; i< n; i++){
		for(int j = 0; j< n; j++){
			if(arr[i] == brr[j] && brr[j] != 0){
				cnt++;
				brr[j] = 0;
			}
		}
	}
	cout << cnt;
	
}
int main(){
	int n;
	cin >> n;
	Main(n);

}*/
/*#include <iostream>
using namespace std;
void Main (string n, int m){
	int cnt = 0;
	for(int i = 0; i< n.size(); i++){
		if(n[i] >='1' && n[i] <='9'){
			cnt++;
		}
	}
	if(cnt >= m){
		cout << "yes";
	}
	else{
		cout << "no";
	}
//cout << cnt;
}
int main (){
	string n;
	int m;
	cin >> n >> m;
	Main(n, m);
}*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
int NoPalindrom(string n){
	int ans = 0;
	string m = "";
	for(int i = 0; i< n.size();i++){
		m += n[i];
		string c = m;
		reverse(c.begin(), c.end());
		if(c!= m){
			ans = c.length();
			
		}	
}
	return ans;
}
int main (){
	string n;
	cin >> n;
	cout << NoPalindrom(n);
}
*/
/*#include <iostream>
using namespace std;
void Main(string n){
	int arr[10] = {0};
	for(int i = 0; i< n.length(); i++){
		arr[n[i] - 48]++;
	}
	
	for(int i = 0; i< 10; i++){
		if(arr[i] != 0){
			cout << i << ": " << arr[i] << endl;
		}
	}

	
	
}
int main (){
	string n;
	cin >> n;
	Main(n);
}*/

/*#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin >> n;
	string temp = "";
	for(int i = 0; i < n.size(); i++){
		if(temp.find(n[i]) != -1){
			cout << n[i];
		}
		else{
			temp+=n[i];
		}
	}
}*/
/*#include <iostream>
using namespace std;
void Main(int n, int m, int c){
	int arr[n][m];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m;j++){
			cin >> arr[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i< n; i++){
			int knt = 0;
		for(int j = 0; j<m;j++){
			if(c == arr[i][j]){
				knt++;
			}
		}
		if(knt > 1){
			knt =1;
		//	cnt += knt;
			
		}
		cnt+=knt;
	}

	cout << cnt;
}
	
int main (){
	int n, m, c;
	cin >> n >> m >> c;
	Main(n, m, c);
}*/

/*#include <iostream>
using namespace std;
int  main (){
	int n;
	cin >> n;
	int arr[n];
	int brr[n];
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	for(int j = 0; j< n; j++){
		cin >> brr[j];
	}
	int cnt = 0;
	for(int i =0; i< n; i++){
		for(int j= 0; j< n; j++){
			if(arr[i] == brr[j] && brr[j] != 0){
				cnt++;
				brr[j] = 0;
				
				
			}
		}
	}
	cout << cnt;
	
}*/
/*#include <iostream>
using namespace std;
int main (){
	int ans = 0;
	string n;
	cin >> n;
	for(int i = 0; i<5; i++){
		if(n[2] >= '0' && n[2] <= '9' && n[1] == '+'){
			 ans = n[4] - n[2];
		}
		if(n[0] >= '0' && n[0] <= '9' && n[1] == '+'){
			ans = n[4] - n[0];
		}
		if(n[2] >= '0' && n[2] <= '9' && n[1] == '-' ){
			 ans = n[4] + n[2];
		}
		if(n[0] >= '0' && n[0] <= '9' && n[1] == '-'   ){
			 ans = n[0]-n[4];
		}
	//cout << ans;
}
cout << ans ;
}*/

/*#include <iostream>
using namespace std;
int main (){
	int m;
	string n;
	cin >> n >> m;
	
	for(int i = 0;i<n.length(); i++){
		n[i] = n[i] - m;
		if(n[i] >= 'A' && n[i] <= 'Z')
		{
			cout << n[i];
			
		}
		else{
			n[i] = n[i] + (26-m) +m;
			cout << n[i];
			}


	}
}*/

/*#include <iostream>
using namespace std;
int main (){
	string n;
	long int c, v;
	cin >> n >> c >> v;
	for(int i = 0; i<n.length(); i++){

	}
	cout << n;
}*/
/*#include <iostream>
using namespace std;
int main(){
	string n;
	getline(cin , n);
	
	for(int i = 0; i< n.length(); i++){
		if(!(n[i] == ' ' && n[i] == n[i+1])){
			cout << n[i];
		}
	}
}
*/

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){
	string n;
	cin >> n;
	
		cout << n.substr(1, 3);
	
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    string s, res = "";
    cin >> s;
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if(s == s1){
        cout << s;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        for(int j = i; j < s.size(); ++j){
            string t = s.substr(i, j - i + 1);
            string t1 = t;
            reverse(t.begin(), t.end());
            if(t == t1 && t.size() > k){
                res = t;
                k = res.size();
            }
        }
    }
    cout << res;
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string m = "";
	while(n!=0){
		m = to_string(n%2) + m;
		n /= 2;

	}
	cout << m;

}
*/

/*#include <iostream>
using namespace std;
int main(){
	string n;
	cin >>n;
	string c = "";
	for(int i= 0; i< n.length(); i++){
		if(n[i] >= '0' && n[i] <= '9'){
			while(n[i] !=0){
				c = to_string(n[i]%2) + c;
				n[i] = n[i] / 2;
			}
			
		}
	}
	cout << c << 
}*/



/*#include <bits/stdc++.h>

using namespace std;

int n;

void bin(int n){
 if(n == 0) return;
 
 bin(n/2);
 
 cout << n % 2;
}

int main(){
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
     if(isdigit(s[i])){
      n += s[i] - '0';
      
      if(isdigit(s[i + 1])){
       n *= 10;
       continue;
      }
      
      bin(n);
      n = 0;
      continue;
  }
  
  cout << s[i];
  
 }
}*/









