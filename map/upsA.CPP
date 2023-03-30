#include <iostream>
using namespace std;
bool dad(string s){
	int cnt = 0;
	for(int i = 0; i< s.size(); i++){
		if(s[i]>=48 && s[i]<=57){
			return false;
		}
	}
	return true;
}
int main(){
	string s;
	getline(cin, s);
	string w;
	for(int i = 0; i< s.size()+1; ++i){
		if(s[i] != ' ' && i != s.size()){
			w += s[i];
		}
		else {
			if(dad(w) == true){
				cout << w << endl;
			}
			w ="";
		}
	}

}
