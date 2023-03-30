/*#include <bits/stdc++.h>
using namespace std;
void Hello(){
    cout << "Holla amigos" << endl;
   
}

int doubleNumber(int a){
    return a * 2;

}



int main (){
    int n;
    cin >> n;
    cin >> a;

    for(int i = 0; i< n; i++){
    Hello();
    }

    for(int i = 0; i< n; i++){
        doubleNumber();
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
void Plus(int a , int b){
    cout << a + b;
}
int main (){
    int a , b;
    cin >> a >> b;
    Plus(a,b);
}*/

/*#include <bits/stdc++.h>
using namespace std;
int PLus(int a, int b){
    return a + b;

}
int main (){
    int a, b;
    cin>> a >> b;
    cout << PLus(a, b);
}*/

/*#include <bits/stdc++.h>
using namespace std;
void DifferenT(int n){
    int arr[n];
    int brr[n];
    int crr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j< n; j++){
        cin >> brr[j];

    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i< n;i++){
            for(int j = 0; j< n; j++){
                if(i == j && k == i && arr[i] > brr[j]){
                    crr[k] = arr[i] - brr[j];
                }
                else if(i == j && k == i && arr[i] < brr[j]){
                    crr[k] = brr[j] - arr[i];
                }
            }
        }
        cout << crr[k] << " ";
    }
    }
int main (){
    int n;
    cin >> n;
    DifferenT(n);
}*/

/*#include <bits/stdc++.h>
using namespace std;
void SamE(int n, int x, bool flag){
    flag =true;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i< n; i++){
        if(x != arr[i]){
            flag = false;
            //break;
            }
        else if(x == arr[i]){
            flag = true;
        }
    
    if (flag == true){
        cout << "Yes";
        break;
    }
    else if(flag == false){
        cout << "No";
        break;
        flag = true;
    }
    flag = true;
}
}
int main(){
    int n;
    int x;
    bool flag;
    SamE(n, x, flag);
}*/

/*#include <bits/stdc++.h>
using namespace std;
void BooK(int n, int * arr, int x){
    for(int i  =0; i<n; i++){
        if(x ==arr[i]){
            cout << "Yes";
            
        }
        else{
            cout << "No";
            break;
        }
    }

}
int main (){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    BooK(n , arr, x);
}*/

/*#include <bits/stdc++.h>
using namespace std;
void BooK(int n, int m){
    double g = sqrt(n*n + m*m);
    cout << setprecision(4) << g;
    
    

}
int main (){
    int n, m;
    cin >> n >> m;
    int g;
    BooK(n, m);
    
}*/

/*#include <bits/stdc++.h>
using namespace std;
string BooK(string n, int m){
    int cnt = 0; 
    for(int i  =0; i< n.length(); i++){
        if(n[i] >= 48 && n[i] <= 57){
            cnt++;
        }
    }
    if(cnt == m || cnt > m){
        return "YES";

    }
    return "NO";

}
int main (){
    string n;
    int m;

    cin >> n >> m;
    cout << BooK(n, m);
    
}
*/
/*#include <bits/stdc++.h>
using namespace std;
void BooK(string n){
    for(int i = 0; i< n.length(); i++){
        if(!(n[i] == 'a' || n[i] == 'e' || n[i] == 'u' || n[i] == 'o' || n[i] == 'i' ||n[i] == 'A' || n[i] == 'E' || n[i] == 'U'|| n[i] == 'O' || n[i] == 'I') ){
            cout << n[i];
        }
    }
     
}
int main (){
    string n;
    getline(cin , n);
    BooK(n);
}*/



/*#include <bits/stdc++.h>
using namespace std;
void Book(int n){
    int cnt = 0;
    while(n != 0){
        n = n % 10;
        cnt++;
    }
    cout << cnt ;

}
int main(){
    int n;
    cin >> n;
    Book(n);
}*/


/*#include <bits/stdc++.h>
using namespace std;
void BooK(string n){
    for(int i =0; i< n.length(); i++){
        if(i % 2 == 0 && n[i] >= 'a' && n[i] <='z'){
            n[i] = n[i] - 32;
            
            
        }
       
        
    }
    cout << n;
    
}
int main (){
    string n;
    cin>> n;
    BooK(n);
    return 0; 
}*/



/*#include <bits/stdc++.h>
using namespace std;
int BooK(int n, int m, int a, int b){
    int arr[] = {n, m, a, b};
    sort(arr, arr+4);
    return arr[3];


}



int main (){
    int n, m , a, b;
    cin >> n >> m >> a >> b;
    /*
    int arr[ ] = {n, m, a, b};
    sort(arr, arr+4);
    cout << arr[3] << " ";*/
  //  cout << BooK(n, m , a, b);

//}

/*#include <bits/stdc++.h>
using namespace std;
int BooK(int n, int * arr){
   for(int i = n-1; i >= 0; i--){
    cout << arr[i] << " ";
   }
}
int main (){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    cout << BooK(n , arr);
}
*/
/*#include <bits/stdc++.h>
using namespace std;
/*string BooK(){
    char n;
    cin >> n;
   // cout << (char)toupper(n);
   if(n >= 97 && n <= 122){
    n = n - 32;
   }
   cout << char(n);
    
}*/
/*void arr(string s){
    cin >> s;
    char a = s[0];
    char b = toupper(a);
    cout << b;
}
int main (){
    string s;

    arr(s);
    return 0;

}*/

/*#include <bits/stdc++.h>
using namespace std;
int BooK(int n){
    cout << abs(n);

}
int main (){
    int n;
    cin >> n;
    BooK(n);
}*/
/**/
/*#include <bits/stdc++.h>
using namespace std;
int BooK(double n , double m){
    cout << setprecision(6) <<  m*100 / n;
}
int main (){
    double n, m;
    cin >> n >> m ;
    BooK(n, m );

 }*/

/*#include <bits/stdc++.h>
using namespace std;

void BooK(int n){
    if(n == 0) return;
    int sum = 0; 
    sum += n%10;
    BooK(n/10);
    


}
int main (){
    int n;
    cin >> n;
    int sum;
    int LastDigit = n%10;



    BooK(n);
    if(sum % LastDigit==0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    


}*/

/*#include <bits/stdc++.h>
using namespace std;
void BooK(int n,string m){
    int cnt  = 0; 
    m = to_string(n);
    for(int i = 0; i< m.length(); i++){
        if(m[i] % 2 == 0){
            cnt++;
        }
    }
    if(cnt == m.length()){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}
int main  (){
    int n;    
    cin >> n;

    string m;

    BooK(n, m);
    
}*/

/*#include <bits/stdc++.h>
using namespace std;
int arr[999][999];
void BooK(int n, int m){
    cin >> n >> m;
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< m; i++){
        for(int j = 0; j< n; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }


}
int main (){
    int n, m;
    BooK(n, m);
   
}*/

/*#include <bits/stdc++.h>
using namespace std;
void BooK(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    cout << sum;
}
int main (){
    int n;
    cin >> n;
    int sum = 0;
    BooK(n);
}
*/

/*#include <bits/stdc++.h>
using namespace std;
void BooK(int n){
    string m = to_string(n);
    int sum = 0;
    for(int i = 0; i< m.length(); i++){
       sum = sum + char(m[i]);
       //cout << sum;
    }
    cout << sum;

}

int main()
{

    int n;
    cin >> n ;
    BooK(n);

}*/

/*#include <bits/stdc++.h>
using namespace std;

void BooK(int n, int arr[], int brr[]){
    int cnt = 0;
    int begin = n;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<begin; j++){
            if(arr[i] == brr[j]){
                cnt++;
                brr[j] = brr[begin-1];
                begin--;
                break;
            }
        }
    }
    cout << cnt;
    
}
int main (){
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i= 0; i< n; i++){
        cin >> brr[i];
    }
    BooK(n, arr, brr);
}*/

/*#include <bits/stdc++.h>
using namespace std;
string BooK(string n, int m){
    int cnt = 0;
    for(int i = 0; i< n.length(); i++){
        if(isdigit(n[i])){
            cnt++;
            if(cnt == m) return "Valid";
            if(!isdigit(n[i+1])) cnt =0;
        }
        
    }
    return "Not valid";

}
int main(){
    string n;
    int m;
    cin >> n >> m;
    cout << BooK(n, m);
}*/

/*#include <iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i = 0; i< n.length();i++){
        if(n[i] >= 48 && n[i] <= 57 || n[i] >='A' && n[i] <='Z'){
            cout << "yes";
           // break;
        }
        else{
            cout << "no";
            //break;
        }
    }
}*/

#include <iostream>
using namespace std;
int main (){
    char n;
    cin >> n;
    cout << (char) toupper(n);
}