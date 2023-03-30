#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	cin >> s;
	stack <char> t;
	for(int i = 0; i< s.size(); ++i){
		if(s[0] == ')' || s[s.size() - 1] == '('){
			cout << "NO";
			return 0;
		}
		if(t.empty()) t.push(s[i]);
		else if(t.top() == s[i]) t.push(s[i]);
		else{
			t.pop();
		}
		
		
	}
	if(t.empty()) cout << "YES";
	else cout << "NO";
}
