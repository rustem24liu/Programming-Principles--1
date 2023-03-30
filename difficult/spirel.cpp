#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int arr[n][n];
	int f =0;
	int cnt = 1;
	for(int i =0; i< n; i++){
		for(int j = 0; j< n; j++){
			arr[i][j] = -1;
		}
	}
	while (n * n >= cnt){
		for(int i =0; i< n; i++){
			if(arr[f][i] == -1){
				arr[f][i] = cnt;
				cnt++;
				
			}
		}
		for(int i =f; i< n; i++){
			if(arr[i][n-f-1] == -1){
				arr[i][n-f-1] = cnt;
				cnt++;
			}
		}
		for(int i =f; i< n; i++){
			if(arr[n-f-1][n-i-1] == -1){
				arr[n-f-1][n-i-1] =cnt;
				cnt++;
			}
		}
		for(int i = f; i< n; i++){
			if(arr[n-i-1][f] == -1){
				arr[n-i-1][f] = cnt;
				cnt++;
			}
		}
		f++;

	}
	for(int i =0; i< n; i++){
		for(int j = 0; j<  n; j++){
			if(arr[i][j] == -1){
				cout << "   ";

			}
			else{
				cout << arr[i][j] << " ";
			}
			
		}
		cout << endl;
	}
}
