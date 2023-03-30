/*#include <bits/stdc++.h>
using namespace std;
void RespecT(int n, int*arr){
	//reverse(arr, arr+n);
	for(int i = n-1; i>=0; i--){
		cout << arr[i] << " ";
	}
}
int main (){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	RespecT(n, arr);
}*/

/*#include <iostream>
using namespace std;
void Main(int n){
	for(int i = 2; i< n; i++){
		bool flag = false;
		for(int j = 2; j< i; j++){
			if(i%j == 0){
				flag = true;
			}
			
		}
		if(flag == false){
			cout << i << "is prime" << endl;
			flag = true;;
		}
	}

}
int main (){
	int n;
	cin >> n;
	Main(n);
}*/
/*#include <iostream>
using namespace std;
char arr[1000][1000];
void Main(int n){
	int m = n * 2 -1;
	for(int i = 0; i< n; i++){
		for(int j = 0; j<m; j++){
			arr[i][j] = '.';
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j< m; j++){
			for(int c = m/2-i; c<m/2+i+1; c++){
				arr[i][c] = '*';
			}
			cout << arr[i][j];
		}
		cout << endl;
	}
	
	
}
int main (){
	int n;
	cin >> n;
	//int m = n*2-1;
	Main(n);
	
}*/














