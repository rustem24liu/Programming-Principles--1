#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin >> n;
	map <string, int> m;
	for(int i = 0; i < n; i++){
		string s;
		int x;
		cin >> s;
		if(m.find(s) == m.end()) m[s]++;
		else m[s]++;
		if(m[s] == 1) cout << "new user added" << endl;
		else cout << "user already exists" << endl;
	}
	
	
	
	
}
