#include <iostream>
using namespace std;
int main (){
	int even =0;
	int evensum = 0;
	int odd = 0;
	int oddsum = 0;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i< n; i++){
		if(arr[i] % 2 == 0){
			even++;
			evensum += arr[i];	
		}
		else if(arr[i] % 2!=0){
			odd++;
			oddsum += arr[i];
		}
	}
	cout << "Left hand magic power:" << " " <<  even * evensum;
	cout << endl;
	cout << "Right hand magic power:" <<" " <<  odd * oddsum;	
}