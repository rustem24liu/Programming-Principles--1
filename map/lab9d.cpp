#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n , m;
	cin >> n >> m;
	vector <int> v;
	for(int i = 0; i< n; i++) {
		int x ;
		cin >> x;
		v.push_back(x);
	}
	int cnt = 0 ;
	for(int i  =0; i< v.size(); ++i) {
		if(v[i] == m) cnt++;
	}
	cout << cnt;

}
