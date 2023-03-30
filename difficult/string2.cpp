#include <iostream>
using namespace std;
int main()
{
	string n;
	cin >> n;
	string m = "";
	for(int i =0; i<n.length(); i++){
		if(m.find(n[i]) != string::npos ){
			cout << n[i];
		}
		else{
			m += n[i];
		}
	}
	return 0;
}
