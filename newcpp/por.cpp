/*#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, max = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];

        }
    }
     for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }

        }
       

}
 cout << max;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    int max;
    int second;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];

        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr[0][0] < arr[0][1]){
                max = arr[0][1];
                second = arr[0][0];

            }
            else {
                max = arr[0][0];
                second = arr[0][1];

            }
        }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr[i][j] > max){
                second = max;
                max  = arr[i][j];
                

            }
            else if (arr[i][j] > second && arr[i][j] != second){
                second = arr[i][j];

            }
            else if (max == second){
                second = 0;
            }

        }
}
    }

    cout << second;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m, max = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];

        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] < 0){
                max = max + 1;
            }

        }
}
cout << max;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        cout << i << " ";
        for (int j = 1; j < n; j++){
            if ( i * j==0){
                cout << j << " ";

            }
            else {
                cout << i * j << " ";
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
    int b = 0;
    string a = "[*]";
    for (int i = 0; i < n; i++){
        for (int i = 0; i <= b; i++){
            cout << a;
        }
        b +=1;
        cout << endl;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int max = -999999999;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
     for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
                a = i + 1;
                b = j + 1;
            }

        }
        
}
cout << a << " " << b ;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i + j == n -1){
                cout << i+1;
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int min = 10000000;
    int b = 0;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for (int j =0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int sumrow = 0;
        for (int j =0; j < m; j++){
            sumrow += arr[i][j];

        }
        if (sumrow  < min){
            min = sumrow;
            b = i;

        }
        
}
cout << b+1;
   
}
*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    int a = 0;
    double b = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            a = sqrt(arr[i][j]);
            b = sqrt(arr[i][j]);
            if (a == b){
                arr[i][j] = a;
                
            }

        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] <<" ";

        }
        cout << endl;
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m, j;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j ++){
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j ++){
            if((i + j)%2 ==0){
                arr[i][j] += 1;
            }
            else if((i+j) % 2 != 0){
                arr[i][j] -=1;
            }
        }
     }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j ++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
}
}*/
