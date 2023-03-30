#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int brr[n];
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i< n; i++){
		cin >> brr[i];
	}
	int m;
	cin >> m;
	int cnt = 0;
	for(int i = 0; i< n; i++){
		if(m>=arr[i] && m<=brr[i]) cnt++;
	}
	cout << cnt;
}