/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Degree(int n){
	cout << setprecision(10) << pow(2, n);
	
}
int main (){
	int n;
	cin >> n;
	Degree(n);
}*/

/*#include <iostream>
using namespace std;
int main (){
	int n;
	cin >> n;
	cout << n/%2 << 
}*/

/*#include <bits/stdc++.h>
using namespace std;

void Digit(int n){
	string m = to_string(n);
	long long sum = 0;
	while (m.length() > 0){
		sum += n%10;
		n /= 10;
	}
	cout << sum;
}
int main(){
	long long int n;
	cin >> n;
	Digit(n);
}*/
/*#include <iostream>
using namespace std;
bool check(int n){
	if(n==1) return 1;
	if(n%2==0){
		return check(n/2);
	}
	if(n%2!=0){
		return 0;
	}
}
int main(){
	int n;
	cin >> n;
	if(check(n)) cout << "Yes";
	else{
		cout << "No";
	}
}*/
/*#include <iostream>
using namespace std;
float i = 0;
float maxl = 0;
long long Maxs(string n, int i){
	if(i == n.size()) return 0;
	if((n[i]-48)>maxl){
	maxl = (n[i]-48);
	Maxs(n, i+1);
	}
	return maxl;

}
int main(){
	string n;
	cin >> n;
	cout << Maxs(n, i);
}*/
/*#include <iostream>
using namespace std;
int i =1;
int Simpledimple(int n, int i){
	if(i == n) return n;
	if(n == 0) return 0;
	
	cout << i << " ";
	return Simpledimple(n, i+1);

}
int main(){
	int n;
	cin >> n;
	cout << Simpledimple(n, i);


}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int Palindrome(string n){
	string m = n;
	reverse(m.begin(), m.end());
	if(m == n) return 1;
	else{
		return 0;
	}

}
int main(){
	string n;
	cin >> n;
	if(Palindrome(n)) cout << "Yes";
	else{
		cout << "No";
	}
}*/
/*#include <iostream>
using namespace std;
int i =0;
int Maxdig(string n,  int i, int cnt = 0){
	if(n[i]%2==0) cnt++;
	return Maxdig(n, i+1, cnt);
	cout << cnt;

}
int main(){
	string n;
	cin >> n;
	Maxdig(n, i);

}*/
/*#include <iostream>
using namespace std;
int i = 0;
int EveN(string n, int i){
	int cnt = 0;
	if(i == n.size()) return cnt;
	
	if(n[i]-48 %2==0) cnt++;
	return cnt;
	EveN(n, i+1);

	/*for(int i = 0; i< n.length(); i++){
		if((n[i]-48) % 2 == 0) cnt++;
	}*/	

/*}
int main(){
	string n;
	cin >> n;
	cout << EveN(n , i);
}*/


/*#include <bits/stdc++.h>
using namespace std;
int i = 0;
int maxo = 0;
int Maxi(string n,int i){
	int maxo = 0;
	if(i==n.size()) return 0;
	return max((n[i]-48), Maxi(n, i+1));
	/*if(char((n[i]-48)) > maxo){
		maxo= char(n[i]-48);
		Maxi(n, i+1);
	return maxo;
}*/
	

/*/}
int main(){
	string n;
	cin >> n;
	cout << Maxi(n, i);
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
string cheeter(int n, int k, int arr[], int i = 1){
	if(i == n-1) return "no";
	if((arr[n-i] - arr[n-i-1]) < k) return "cheater";
	return cheeter(n, k , arr, i+1);
}
int main(){
	int n, k;
	cin >> n>> k;
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	cout << cheeter(n, k, arr);

}*/
#include <iostream>
using namespace std;;
int infinte(){
	int n;
	cin>> n;
	if(n==0) return 0;
	return n + infinte();
}
int main(){
	cout << infinte();
	
}
/*#include <iostream>
using namespace std;
int i = 1;
int digit(int n, int i){
	if(i==n) return n;
	cout << i << " ";
	return digit(n, i+1);

}
int main(){
	int n;
	cin >> n;
	cout << digit(n, i);
}*/
/*#include <iostream>
using namespace std;
int i = 0;
int Maxi(string n, int i){
	if(i==n.size()) return 0;
	return max(n[i]-48, Maxi(n, i+1));
}
int main(){
	string n;
	cin >> n;
	cout << Maxi(n, i);

}*/