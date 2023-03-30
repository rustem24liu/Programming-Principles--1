/*#include <bits/stdc++.h>
using namespace std;
int main (){

	int n;
	cin >> n;
	int arr[n];
    for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int m;
	cin >> m;
	int ar[m];
	for(int i = 0; i < m ;i++){
		cin >> ar[i];
		}
	int z;
	z = n + m;
	int arr2[z];
	for(int i = 0; i < n;i++){
		arr2[i] = arr[i];
	}
	for(int i = 0; i < m; i++){
		arr2[n + i] = ar[i];

	}
	sort(arr2, arr2 + z);
	for(int i = 0; i < z; i++){
		cout << arr2[i] << " ";
	}
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i  <n; i++){
		cin >> arr[i];

	}
	for(int i = 0; i < n; i++){
		sort(arr, arr + n);
	}
	for(int i = n-1; i >= 0; i--){
		cout << arr[i] << " ";
	}
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		if(n%i ==0){
			cout << "NO";
		}
		else {
			cout << "YES";
		}
	}
}*/

#include<iostream>
using namespace std;

int main() {
	int b;
	cin>>b;
	int **a = new int*[b];
	for (int i = 0; i < b; i++) {
		a[i]= new int[b];
	}
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			cin>>a[i][j];
		}

	}

	for (int i = b-1; i > 0; i--) {
		for (int j = 0; j < b-i; j++) {
			cout<<a[j][j+i]<<" ";
		}
		cout<<endl;
	}


	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			if (i==j) {
				cout<<a[i][j]<<" ";
			}

		}
	}
	cout<<endl;
	for (int i = 1; i < b; i++) {
		for (int j = 0; j < b-i; j++) {
			cout<<a[j+i][j]<<" ";
		}	

		cout<<endl;
	}

}






