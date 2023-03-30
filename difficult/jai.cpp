/*#include <iostream>
using namespace std;
int main(){
  //  string n = "string";
  //  for(int i = 0; i < n.length(); i++){
    //	cout << n[i] << " ";
//	}
//	cout << endl;
//	cout << n.length();


    int n;
    cin >> n;
    int c = 0;
    
	while(n !=0 ){
		c++;
		cout << n << endl;
		n /= 10;
		
	}   
	cout << endl;
}*/

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
}
*/    


/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i-1]){
            cout<<arr[i]<<" ";
        }
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
    int a = 0, b = 0;
	cin >> n;
	for(int i = 1; i < n; i++){
		if(n%i ==0){
            b = b + 1;
		}
	}
    if(b >= 2){
        cout << "NO";

    }
    else{
        cout << "YES";
    }
}
	
*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int n, b;
	
	cin >> n;
	b = sqrt(n);
	if(n%2 != 0 && n%3 != 0 && n%5 != 0 && b != sqrt(n)){
		cout << "YES";
		
	}
	else {
		cout << "NO";
	}
}	
*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int max;
	int second;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[0][0] < arr[0][1]){
				max = arr[0][1];
				second = arr[0][0];
			}
			else {
				max  = arr[0][0];
				second  = arr[0][1];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] > max){
				second = max;
				max = arr[i][j];
			}
			else if(arr[i][j] > second && arr[i][j] != max){
				second = arr[i][j];

			}
			else if(second == max){
				second = 0;
			}
		}
}
cout << second;
}*/
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int f = 0;
	int cnt = 1;
	cin >> n;
	int arr[n][n];
	for(int i =0; i < n;i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = -1;

		}
	}
	while(n*n >= cnt ){
	for(int i = f; i < n; i++){
		if(arr[f][i] == -1){
			arr[f][i] = cnt;
			cnt++;
		}
	}
	for(int i = f; i < n; i++){
		if(arr[i][n -f-1] == -1){
			arr[i][n - f - 1] = cnt;
			cnt++;
		}
	}
	for(int i = f; i < n; i++){
		if(arr[n - f - 1][n - i - 1] == -1){
			arr[n - f - 1][n - i - 1] = cnt;
			cnt++;
		}
	}
	for(int i = f; i < n; i++){
		if(arr[n - i - 1][f] ==-1){
			arr[n - i- 1][f] = cnt;
			cnt++;
		}
	}
	f++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}






















