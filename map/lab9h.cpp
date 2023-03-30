#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin >> n;
	map <string , int> m;
	for(int i = 0 ; i< n; i++){
		string s;
		cin >> s;
		if(m.find(s) == m.end()) m[s] = i+1;
		
	}
	map <string , int> :: iterator it;
	for(it = m.begin(); it!=m.end();++it){
		cout << (*it).first << " " << (*it).second << endl;;
	}
}
