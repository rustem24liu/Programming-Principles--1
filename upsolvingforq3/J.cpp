#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s, t;
	cin >> s;
	int sum=0;
	for(int i=s.size()-1; i>=0; i--){
		t+=s[i];
	}
	for(int i=0; i<s.size(); i++){
			sum+=s[i];}

	if(s==t){
		for(int i=0; i<s.size(); i++){
			
			if(sum/s[i]==s.size() && sum%s[i]==0){
				cout << "0";
				return 0;
			}
			else{
				cout << s.size()-1;
				return 0;
			}
		}
	}
	else{
		cout << s.size();
	}
}