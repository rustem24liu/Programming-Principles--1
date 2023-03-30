/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
if(a > b && b > c && a > c){
  cout << a << " " <<  b << " "<< c;
}
else if (a > b && c > b && a > c){
  cout << a << " "<< c << " " << b;
}
else if (b > a && a > c && b >c){
  cout << b << " " <<  a << " " << c;
}
else if (b > c && c > a && b > a){
  cout << b << " " <<  c  << " " <<  a;
}
else if (c > a && a > b && c > b){
  cout << c << " " <<  a << " " << b;
}
else if (c > b && b > a && c > a){
  cout << c << " " <<  b << " " <<  a;
}
  }*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x > a && (x - a) >= (b - y)  ){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
       
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
      if (n % i ==0){
        cout << i;
        return 0;
      }
    }     
    
}*/
/*#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main (){
    int n, m;
    double x;
    cin >> n;
    m = sqrt(n);
    x = sqrt(n);
    if (m == x){
        cout << "Perfecto";
    }
    else if ( m != x){
        cout << "Simple";
    }
    }*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, b, c;
    cin >> a >> b >> c;
    if (a ==b || a ==c || b ==c){
        cout << "Yes";
    }
    
    else {
        cout << "No";
    }
    }*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,m,b;
  cin >> n >> m >> b;
  if ((n+m)*0.1 < b){
    cout << "Boris, you are punished!";
  }
  else if ((n+m)*0.1 > b){
    cout << "You are my sweet baby";
  }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
  int a,b,c,costa,costb,costc,money;
  cin >> a >> b >> c >> costa >> costb >> costc >> money;
  if (((a*costa)+(b*costb)+(c*costc)) <= money ){
    cout << "Yes";
      }
  else if (((a*costa)+(b*costb)+(c*costc)) > money ){
    cout << "No";

  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,d,sum = 0;
  cin >> n >> a >> d;
  int arr[n];
  for (int i = a; i < n*d+a; i= i +d){
    cout << i << " ";
  }
  for (int i = a; i < n*d+a; i= i +d){
    sum=sum+i;}
    cout << endl;
cout << "sum:" << " " << sum;


}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  if ((n % 10) == (n/1000) && ((n/10)%10) ==((n/100)%10) ){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
  int mid,end,final;
  cin >> mid >> end >> final;
  if((mid+end+final)>=70 && (mid+end) >= 30 && final>20 ){
    cout << "YES!";
  }
  else {
    cout << "NO.";
  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,m;
  cin >> n;
  for (int i = 0; i < n ;i++){
    cin >> m;
  }
  cout << endl;

  if (((m%10)+(m/10 %10)+((m/100)%10)+((m/1000)%10)+((m/10000)%10) + ((m/100000)%10) +((m/1000000)%10)+ ((m/10000000)%10)) %2 ==0){
    cout << "Sum of digits is even!" << endl;
  }
  if(((m%10)+(m/10 %10)+((m/100)%10)+((m/1000)%10)+((m/10000)%10) + ((m/100000)%10) +((m/1000000)%10)+ ((m/10000000)%10)) %2 !=0){
    cout << "Sum of digits is odd!" << endl;
  }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main (){
  int a,b,c;
  cin >> a >> b >> c;
  if (a==b && a==c && b==c){
    cout << "NO";
  }
  else if (a==b){
    cout << "YES";
  }
  else if (b==c){
    cout << "YES";
  }
  else if (a==c){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
  string name;
  cin >> name;
  string a = "Hello";
  string b = name;
  cout << a +" " +b;  
}*/
