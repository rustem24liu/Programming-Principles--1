#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i< n; i++){
		for(int j = 0; j< m; j++){
			cin >> arr[i][j];
		}
	}
	int c;
	cin >> c;
	int max = 0;
    for(int i = 0; i< n; i++){
		for(int j = 0; j< m; j++){
			if(arr[i][j] > max) max = arr[i][j];
		}
	}
	if(max > c) cout << "Penalty!";
	else{
		cout << "No penalty for today.";
	}

}