#include <iostream>
using namespace std;
int main(){
	string n;
	cin >> n;
	int sum = 0; 
	for(int i = 0; i< n.size(); i++){
		sum+=char(n[i] - 48);

	}
	if((sum - (char(n[0]-48)))%10 == char(n[0] -48)) cout << "YES";
	else cout << "NO";
}