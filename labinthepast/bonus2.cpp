/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max;
    int second;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n;i++){
        for (int j= 0; j < n;j++){
            cin >> arr[i][j];

        }

    }
    for (int i = 0; i < n;i++){
        for (int j= 0; j < n;j++){
            if(arr[0][0] < arr[0][1]){
                max = arr[0][1];
                second = arr[0][0];
            }
            else {
                max = arr[0][0];
                second = arr[0][1];
            }
            


        }
        for (int i = 0; i < n;i++){
            for (int j= 0; j < n;j++){
            if (arr[i][j] > max){

                second = max;
                max = arr[i][j];
            }

            else if(arr[i][j] > second && arr[i][j] != max){
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
    string n = "[*]";
    int a;
    int c = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        for(int i = 0; i <= c; i++){
            cout << n ;
        }
        c = c + 1;
        cout << endl;


    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[100][100];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                arr[i][j]=1;
            }
            else if(i < j){
                arr[i][j] = 0;

            }
            else {
                arr[i][j] = 0;

            }
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
    }
        cout << endl;
}
return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        cout << i << " ";
        for (int j = 1; j < n;j++){
            if(i*j==0){
                cout << j << " ";
            }

            else {
            cout << (i) * (j) << " ";
            }

        }
        cout << endl;
        
    }
    
    
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,max,a,b;
    
    
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
            }
    }
    max=arr[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            if (arr[i][j] > max){
                max = arr[i][j];
                a = i+1;
                b = j+1;   
            }
            else if(max==arr[0][0]){
                a = 1;
                b = 1;

            }
        } 
    }
            
    cout << a << " " <<b;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,sum=0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }

}
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            arr[i][j];
            if(i+j==n-1){
                sum = sum + arr[i][j];

               
            }
            

        }

}
cout << sum;

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,max=-99999999,a = 1, b = 1;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            if(i==j && arr[i][j] > max){
                max = arr[i][j];
                a = a + i;
                b = b + j;
                

            }
        }
}
        cout << "Maximum element is:" << " "<<  max << " " << "with coordinates:" << " " << a <<";" << b;
}*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,j,i;
    cin >> n;

    cout << "2" << " " <<"is prime" << endl;
    cout << "3" << " "<<"is prime" << endl;
    for (int i = 2; i <= n; i++){
        for (int j = 2; j < i; j++){
            if(i % j ==0) break;
            
            

            }
        
        if(i%j!=0){
                cout << i <<" " << "is prime" << endl;
            }
    }
            
}

