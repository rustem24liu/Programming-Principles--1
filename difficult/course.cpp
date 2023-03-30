#include <bits/stdc++.h>
using namespace std;
int main (){
//    string n = "dtring";
//    for(int i =0; i< n.length(); i++){
//        cout << n[i] << " " << endl;
//    }

/*int a;
cin >> a;
int cnt = 0;
while(a != 0){
    a = a /10;
    cnt++;
}
cout << "number length:" << " " << cnt;
*/



//WATCH
/*int n;
cin >> n;
int second = n %60;
int minute = n / 60%60;
int hour = n /3600 % 24;
cout << hour << " : " << minute << " : " << second;*/


/*int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
for(int i = 0; i < n; i++){
    if(arr[i] % 2 == 0){
        cout << arr[i] << " ";
    }
}*/


/*int n;
int cnt = 0;
cin >> n;
int arr[n];
for(int i = 0; i< n; i++){
    cin >> arr[i];
}

for(int i = 0; i< n; i++){
    if(i == 0){
        cnt = 1;
        continue;
    }

if(arr[i] != arr[i-1]){
    cnt++;
}
}
cout << cnt << " ";
*/

/*int n;
int l = 0;
int cnt = 0;
cin >> n;
int arr[n];
for(int i= 0; i< n; i++){
    cin >> arr[i];

}
while (l < n){
    for(int i = l; i < n; i++){
        if(arr[l] == arr[i] && l !=i){
            cnt++;
        }
    }
    l++;
}
cout << cnt;*/




/*int n;
cin >> n;
int i = 2;
while (n % i != 0){
    i++;
    
    //i++;
}
cout << i;*/


/*int n;
int i =0;
cin >> n;
while (pow(2,i) < n){
    cout << pow(2,i) << " ";
    i++;
}*/
/*int n;
cin >> n;
int i =1;
while (i <=  n){
    cout << i << " ";
    i = i*2;
    
}
*/

/*int n;
cin >> n;
if(n%2 == 0){
    cout << "YES";

}
else {
    cout << "NO";
}*/

/*int n;
int i =0;
cin >> n;
while(n != 0){
    cin >> n;
    i++;
    if(n==0){
        cout << i;
    }
    }
*/


/*int n;
long long sum = 0;

while (cin.peek() != '\n' ){
    cin >> n;
    sum = sum + n;
}
cout << sum << endl;
return 0;*/ 
/*int n;
cin >> n;
int arr[n];
for(int i = 0; i< n; i++){
    cin >> arr[i];
}
for(int i = 0; i < n; i++){
    if(arr[i] > arr[i+1]){
        cout << arr[i] << " ";
    }
}*/



/*int n, m;
cin >> n >> m;
char arr[n];
for (int i = 0; i< n; i++){
    arr[i] = 'I';
}
for(int i = 0; i< m; i++){
    int l,r;
    cin >> l >> r;
    while(l-1 <= r -1){
        r--;
        arr[r] = '.';
    }
}

for(int i =0; i< n; i++){
    cout << arr[i];

}*/



/*int n , m ,c;
cin >> n >> m >> c;
if(c == 1){
while(m >= n*n ){
    cout << n*n <<" ";
    n++;
}
}
else if(c ==-1){
    m =sqrt(m);
    for(int i =m; i >= n; i--){
        cout << i*i << " ";

    }
}*/



/*int n;
cin >> n;
int arr[n];
for(int i = 0; i< n; i++){
    cin >> arr[i];
}
for(int i = 0; i< n; i++){
    for(int j =i+1; j < n; j++){
        if(arr[i] <  arr[j]){
           swap(arr[i], arr[j]);

        }
}
}
for(int i= 0; i < n; i++){
    cout << arr[i] << " ";
}*/

/*int n;
int cnt = 0;
int l = 0;
cin >> n;
int arr[n];
for(int i =0; i< n; i++){
    cin >> arr[i];

}
while(l < n){
    for(int i = l; i < n; i++){
        if(arr[l] == arr[i] && l != i ){
            cnt++;
        }
    }
    l++;

}
cout << cnt; 
*/



/*int n;
cin >> n;
int arr[n];
for(int i =0; i< n; i++){
    cin >> arr[i];
}
//sort(arr, arr+n);

for(int i =0; i < n; i++){
    for(int j =i+1; j < n; j++){
        if(arr[i] < arr[j]){
            swap(arr[i], arr[j]);
        }
    }

    
     //   swap(arr[i], arr[j1])
}
for(int i =0; i< n; i++){
    cout << arr[i] << " " ;
}*/

/*
int n;
cin >> n;
int arr[n][n];
int max =INT_MIN;
int maxX = 0;
int minX = 0;

for (int i =0; i < n; i++){
    for(int j =0; j < n; j++){
        cin >> arr[i][j];
    }
}
for (int i =0; i < n; i++){
    for(int j =0; j < n; j++){
        if(arr[i][j] >  max)
        {
            max = arr[i][j];
            maxX =i+1;
            minX =j+1;
        }
    }
    
}
for(int i =0; i< n; i++){
    for(int j =0; j < n; j++){
        cout << setw(3) << arr[i][j];

    }
    cout << endl;
}
cout << max << " " << maxX <<" " << minX;
*/


/*
	int n,m;
	int cnt = 1;
	cin >> n >> m;
	int arr[n][m];
	for(int i =0; i< n; i++){
		for(int j =0; j< m; j++){
			arr[i][j] = cnt;
			cnt++;
		}
	}
	
	for(int i =0 ; i < n; i++){
		for(int j = 0 ; j < m; j++){
			if(i %2 ==0){
				cout << arr[i][j] <<" ";
			}
			else {
				cout << arr[i][m-j-1] << " ";
			}
		}
		cout << endl;
	}
	/*for(int i =0; i < n; i++){
		for(int j = 0; j< m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	*/




/*
	double n,m;
	int cnt = 1;
	cin >> n >> m;
	while( n < m){
		n = n * 1.1;
		cnt++;
	}
	cout << cnt;	
	*/

/*
	int n;
	cin >> n;
	char arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = '.';
		}
	}
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || i+j == n -1 || n/2 == i || n/2 == j){
				cout << "*";
			}
			else {
				cout << arr[i][j];
				
			}
			cout << " ";
		}
		cout << endl;
	}
	
	
*/
	//for(int i=0; i< n; i++){
	//	for(int j = 0; j< n; j++){
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}
/*int n, m;
cin >> n >> m;
char arr[n][m];
for(int i =0; i < n; i++){
    for(int j = 0; j < m; j++){
        arr[i][j] = '.';

    }
}
int cnt = 1;
for(int i =0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(j < cnt){
            cout << "*";
        }
        else {
            cout << arr[i][j] << " ";
        }

    }
    if(n / 2 > i){
        cout << "*";
        cnt++;


    }
    else {
        cnt--;
        }
        cout << endl;
    


}*/


}












