#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0;
	int min = 9;
	int max = 0;
	while(n!=0){
		sum = n%10;
		n/=10;
		if(sum>max) max = sum;
		if(sum<min) min = sum;
		
	}
	cout << max <<" "<< min;
	
}