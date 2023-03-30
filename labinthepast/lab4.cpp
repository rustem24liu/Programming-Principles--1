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
/*#include <bits/stdc++.h>
using namespace std;
int main (){

    int n,i,j;
    cin >> n;
    cout << "2" << "is prime" << endl;
    for (int i = 2; i < n; i++){
        for (int j = 2; j < i; j++){
            if(i % j ==0) break;
            }
            if(i%j!= 0){
                j = i;
                cout << j <<" " << "is prime";

                cout << endl;

            }
}   
            
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j =0; j < n; j++){
            if (i + j == n-1){
                cout << i + 1 ;
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
int main (){
    int n,m;
    int a = 0;
    double b = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int  i= 0; i < n; i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
            

        }
    }
    
    
    for (int  i= 0; i < n; i++){
        for (int j = 0; j < m;j++){
            a = sqrt(arr[i][j]);
            b = sqrt(arr[i][j]);
            if (a==b){
                arr[i][j]=a;
            }

        }
    }
    for (int  i= 0; i < n; i++){
        for (int j = 0; j < m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;

}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j =0; j < m; j++){
            cin >> arr[i][j];

        }
    }
    for (int i = 0; i < n; i++){
        for (int j =0; j < m; j++){
            if( (i+j)%2 == 0){
                arr[i][j] += 1;
            }
            else if ((i+j)%2!=0){
                arr[i][j] -= 1;
            }

        }
}
    for (int i = 0; i < n; i++){
        for (int j =0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            
      }
    }
    for (int i = 0; i < n; i++){
        long long int sumrow = 0;
        for (int j = 0; j < m; j++){
            sumrow = sumrow + arr[i][j];



        }
        cout << "The sum of row number" << " " << i + 1 << " " << "is" <<" " <<  sumrow << endl;

    

}  
    for (int i = 0; i < m; i++){
        long long int sumcolumn = 0;
        for (int j = 0; j < n; j++){
            sumcolumn = sumcolumn + arr[j][i];

        }
        cout << "The sum of column number"  << " "<< i + 1 << " " << "is" << " " << sumcolumn << endl;
}
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m,sum = 0, a,b;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }

    }
    cout << "coordinates of min elements:" << endl;
    int min = 1000000;
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n; j++){
            if(arr[j][i] < min){
                min = arr[j][i];
                a = i;
                b = j;
            }
        }
        sum = sum+ min;
        cout << b+1 << ";"<< a+1 << endl;
        min = 1000000;
        
        


}
    cout << endl;
    cout <<"Their sum:" << endl;
    cout << sum;
}*/

/*#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n][n];
    
    int num = 1;
    int delta = 0;
    for(int delta = 0; delta <= n-1; delta++){
    for(int i = 0 + delta; i < n - delta; i++){
        a[0 + delta][i] = num;
        num++;
    }
    num--;
    for(int i = 0 + delta; i < n - delta; i++){
        a[i][(n-1) - delta] = num;
        num++;
    }
    num--;
    for(int i = n-1 - delta; i >= 0 + delta; i--){
        a[(n-1)- delta][i] = num;
        num++;
    }
    num--;
    for(int i = n-1 - delta; i >= 1 + delta; i--){
        a[i][0 + delta] = num;
        num++;
    }
    
    
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
    */
   
   
/*#include <iostream>
#include <cmath>

using namespace std;



int main(){
    int n;
    cin >> n;

    int m = ((n-1)*2)+1 ;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = '.';
            
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int c = m/2 - i; c < m/2 + i + 1; c++){
                a[i][c] = '*';
                
            }
            
            
            cout << a[i][j];
        }
        cout << endl;
    }

}*/

/*#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m,sum = 0,a=0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];

        }
    }int min = 1000000;
    for (int i = 0; i < n;i++){
        int sumrow = 0;
        for (int j = 0; j < m; j++){
            sumrow += arr[i][j];

        }
        if(sumrow < min){
            min = sumrow;
            a = i;

        }
        
}
cout << a+1;
}*/

/*#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n; 

    cin >> n;
    
    for(int i = 2; i < n; i++){
        bool a = false;
        for(int j = 2; j < i; ++j){
            if(i%j == 0){
                a = true;
            }
            
            
        }
        
        if(not a){
            cout << i << " is prime";
            cout << endl;
            a= false;
            
        }
        
    }
}*/
#include <iostream>
#include <string>
 
int main()
{
    std::string s = "C+";
    char ch = '+';
 
    s.push_back(ch);
    std::cout << s;
 
    return 0;
}