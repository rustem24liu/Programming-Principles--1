/*#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i  = 0; i<n; i++){
        int sum =0;
        for(int j = 0; j<m; j++){
            sum += arr[i][j];

        }
        cout << sum/m << " " ;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        arr[i]++;
        cout << arr[i] << endl;
    }
}*/
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n, m;
    cin >> n >> m;
    float c = log2(m/n);
    if(m == pow(2, c) * n) cout << "YES" << " " << c;
    else{
        cout << "NO";
    }
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n][n];
    for(int i = 0;i< n; i++){
        for(int j = 0; j< n; j++){
            cin >> arr[i][j];
        }
    }
    int brr[n];
    for(int i =0 ; i< n; i++){
        int max = 0;
        for(int j = 0; j< n ;j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
        brr[i] = max;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j< n; j++){
            arr[i][j] = brr[i];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
using namespace std;
int main (){
    int n, i;
    cin >> n;
    string arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int sum1 = 0;
    for(int i = 0; i< n/2; i++){
        cout << arr[i];
    }
    /*int sum2=  0;
    for(int i = n-1; i>n/2; i++){
        sum2 += char(arr[i]);
    }
    cout << sum1 << endl << sum2;
*/



/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i =0;i< n; i++){
        for(int j = 0;j< n; j++){
        cin >> arr[i][j];
    }
    }
    for(int i = 0; i< n; i++){
        for(int j  = 0; j< n; j++){
            if(arr[i][j] != arr[j][i]){cout << "Not perfect.";
            return 0;
            }
        }
    }
    cout <<"Perfect.";
}*/


/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n, m;
    cin >> n>> m;
    float c = log2(m/n);
    if(n*pow(2,c) == m) cout << "YES" << " "  << c;
    else{
        cout << "NO";
    }
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n; ++i){
        for(int j =0; j< m;j++){
            arr[i][j] = 0;
        }
    }
    int k;
    cin >> k;
    int krr[k][4];
    for(int i = 0; i<k; i++){
        for(int j = 0; j< 4; j++){
            cin >> krr[i][j];
        }
    }
    for(int c = 0; c<k;c++){
        int x1 = krr[c][0];
        int x2 = krr[c][2];
        int y1 = krr[c][1];
        int y2 = krr[c][3];
        for(int i = x1; i< x2; i++){
            for(int j =y1; j<y2; j++){
                arr[i][j] = 1;  
            }
        }

    }
    int cnt = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(arr[i][j] == 0) {
            cnt++;
        }
        }
    }
    cout << cnt;
}*/
  /*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int b, bum = 0, c, cum = 0;
    for(int i = 0; i<n; i++){
        while(arr[i] != 0){
            b = arr[i] % 10; 
            bum=b+bum;
            arr[i] = arr[i]/10;
           
        }
        while(arr[n-1-i] !=0){
            c = arr[n-1-i] % 10;
            cum=c+cum;
            arr[n-1-i] = arr[n-1-i]/10;
            //cout << c << endl;
            
        }
    }
    if(bum == cum) cout << "YES";
    else{
        cout << "NO";
    }
}*/
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, c;
    cin >> n >> m>> c;
  
    if(c==1){
        while(n<=m){
        int r = sqrt(n);
        if(r*r == n){
            cout << r*r << " ";
            
        }
        n++;
        }
    }
    if(c==-1){
        while(m>=n){
            int x = sqrt(m);
            if(x*x == m){
                cout << x*x << " ";
            }
            m--;
            
        }
    }

}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1001] = {0};
    int x, maxi=  0;
    for(int i = 0; i< n; i++){
        cin >> x;// x = 5 , 1, 5, 5 ,4, 1
        if(x > maxi) maxi = x;
        arr[x]++;// arr[5] = 3; arr[1] = 2; arr[4] = 1;
    }
    int maxi2 = 0;
    for(int i = 0; i< maxi; i++){
        if(arr[i] > maxi2) maxi2 = arr[i];
    }
    for(int i = maxi; i>=0; i--){
        if(arr[i] == maxi2) cout << i << " ";
    }
    }
    