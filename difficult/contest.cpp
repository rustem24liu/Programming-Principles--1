/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	bool flag = true;
	for(int i = l; i< r; i++){
		if(i == 0 || i == 1) continue;
		for(int j =2; j< i; j++){
			if(i%j==0){
				flag = false;
				break;	
			}
			}
			if(flag == true){
				cout << i << " ";
				cnt++;
			}
			else {
				flag = true;
			}
		}
		cout << endl << cnt;
		
	}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    getline(cin, n);
    for(int i = 0; i< n.size(); i++){
        if(n[i] >= 'a' && n[i] <= 'z' || n[i] >= 'A' && n[i] <= 'Z' || n[i] == ' '){
            cout << n[i];
        }
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	char arr[n][n];
	for(int i = 0; i< n; i++){
		for(int j =0; j< n; j++){
			if(i == j || i+j == n-1){
				cout << "[*]";
			}
			else {
				cout << "---";
			}
		}
		cout << endl;
	}
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            arr[i][j] = 1;
            }
            
        }
    for(int i = 1; i< n; i++){
        for(int j = 1; j< n; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    }*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    string arr[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            for(int k = 0; k< m-1; k++){
                int first  = 0; 
                for(int x = 0; x < arr[i][k].size(); x++){
                    first = first + arr[i][k][x]; 
                }
                int second = 0;
                for(int x = 0; x < arr[i][k+1].size(); x++){
                    second = second + arr[i][k+1][x];
                }
                if(first > second){
                    swap(arr[i][k], arr[i][k+1]);
                }
            }
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}*/


/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){ 
    if(arr[i+1] - arr[i] > 1){
        cnt++;
    }

}
cout << cnt;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n;j++){
            cin >> arr[i][j];

        }
    }
    for(int i = 0; i< 2*n -1; i++){
        for(int j = 0; j< n; j++){
            if(n-1-i+j >= 0 && n-1-i+j < n){
                cout << arr[j][n-1-i+j] << " ";
            }
        }
        cout << endl;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	string arr[n][n];
	for(int i = 0; i< n; i++){
		for(int j = 0; j< n; j++){
			arr[i][j] = "---";
		}
	}
	for(int i = 0; i< n; i++){
		for(int j = 0; j< n; j++){
			if(i == j || i+j == n-1){
				arr[i][j] = "[*]";
			}
			else {
				arr[i][j] = "---";
			}
			
		}
	}
	for(int i = 0; i< n; i++){
		for(int j = 0; j< n; j++){
			cout << arr[i][j]<< " ";
		}
		cout << endl;
	}
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cin >> arr[i][j];
        }
        
    }
    for(int i = 0; i< 2*n - 1; i++){
        for(int j = 0; j< n;j++){
            cout << arr[j][n-1-i+j] << " ";
        }
        cout << endl;
    }
}

*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m , x;
    int cnt = 0;
    cin >> n >> m >> x;
    int arr[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(arr[i][j] == x){
                cnt++;
                break;
                
            }
        }
    }
    cout << cnt;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m;
    cin >> n>> m;
    string arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j< m;j++){
            if(i == 0 && j==0 || i == 0 && j == m-1 || j == 0 && i == n-1 || i == n-1 && j == m-1){
                cout << "+";
            }
            else if(i == 0 || i == n-1){
                cout << "-";
            }
            else if(j == 0 || j == m-1){
                cout << "|";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
                
                
                
                
                /*arr[i][j] = "+";
            }
            else if(i > 0 && i < n-1 && i != j){
                arr[i][j] = "|";
            }
            else if(j > 0 && j <= m-1 && j != i){
                arr[i][j] = "-";
            }
            else {
                arr[i][j] == " ";
            }
            arr[0][0] = "+";
            arr[i][m-1] = "+";
            arr[j][n-1] = "+";
            arr[n-1][m-1] = "+";
            arr[i][j] = "---";*/

        
    
    /*for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    }
}
*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    if(n < 0){
        cout << "NO";
        return 0;

    }
    int prev = 0, cur = 1;
    while(prev <= n){
        if(prev == n){
        cout << "YES";
        return 0;
    }
        int temp = cur;
        cur = cur + prev;
        prev = temp;
    
   
    }
    cout << "NO";

}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    int crr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for( int j = 0; j< n; j++){
        cin >> brr[j];
    }
    for(int k =0; k< n; k++){
        for(int i = 0; i<  n; i++){
            for(int j = 0; j< n; j++){
                if(i == j && k == i){
                crr[k] = arr[i]-brr[j]; 
                }
            }
        }
    }
    int max = INT_MIN;
    for(int k = 0; k< n;k++){
        if(crr[k] > max) max = crr[k];
    }
    cout << max;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
void Serv(int n, int m){
    for(int i = 0; i<n; i++){
        int sumrow = 0;
        for(int j = 0; j< m; j++){
            sumrow += arr[i][j];
        }
        cout << sumrow << endl;
    }
}
int main (){
    int n, m;
    cin >> n;
    int arr[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            cin >> arr[i][j];
        }
    }
    Serv(n, m);
    //int q;
    //cin >> q;


}*/

#include <iostream>
using namespace std;
bool isVowel(char c){
    return         
}



int main(){
    int n;
    cin >> n;
    string arr[n];
    string magicString = " ";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
        int sz = arr[i].size();
        int vowel = 0;
        for(int j = 0; j< arr[i].size(); j++){

        }
    }

}

