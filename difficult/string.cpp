//#include <bits/stdc++.h>
//using namespace std;
//int main (){
   /* string number = "756";
    int a = stoi(number);
    string a = "zxc";
    string b = "asd";
    string c = "qwer";
    int d = 321;
    string e = to_string(d);

    string q = "123";
    string w = "456";
    string e = "789";
    int r = stoi(q);
    int t = stoi(w);
    int y = stoi(e);
    cout << d+r+t+y;
   //cout << a+b+c+e;
 string n;
 cin >> n;
 int m;
 cin>> m;
 cout << n << " "<< "is" << " " << m;*/


 /*int n = 1234;
 string str = "qwerty";
 string m = to_string(n);
 cout << str + '\n' + m;*/

/*string n ="abc";
for(int i = 0; i< n.length(); i++){
    cout << n[i] << " :" << int(n[i]) << endl;
}
*/
/*string n;
cin >> n;
string m = n;
reverse(n.begin(), n.end());
if(n == m){
  cout << "YES";
}
else{
  cout << "NO";
}
*/

/*string n;
cin >> n;
int even = 0;
int odd = 0;
for(int i = 0; i< n.length(); i++){
  if(i%2==0){
    even += n[i];
  }
  else{
    odd += n[i];

  }
}
if(even == odd){
  cout << "YES";
}
else{
  cout << "NO";
}*/

/*string n;
int l,r;
cin >> n >> l >> r;
for(int i = l; i< r; i++){
  cout << n[i];
}*/

/*string n,m;
cin >> n >> m;
if(n == m){
  cout << "YES";

}
else {
  cout <<"NO";
}*/


/*string n, m;
cin >> n >> m;
string a = n;

string b = m;
sort(n.begin(),n.end());
sort(m.begin() ,m.end());

reverse(n.begin(),n.end());
reverse(m.begin(),m.end());
//cout << a << '\n' << b;
if(a == m || b == n || n == m){
  cout << "YES";

}
else {
  cout << "NO";

}*/
/*int cnt = 0;
string n;
cin >> n;
for(int i =0; i< n.length(); i++){
  if(n[i] == 'a'){
    cnt++;
  }
  else if(n[i] == 'e'){
    cnt++;
  }
  else if(n[i] == 'i'){
    cnt++;
  }
  else if(n[i] == 'o'){
    cnt++;
  }
  else if(n[i] == 'u'){
    cnt++;
  }
}
cout << cnt ;
*/

/*string n;
cin >> n;
for(int i = 0; i<n.length(); i++){
  if(n[i] > n[i+1]){
    cout <<"NO";
    return 0;
  }
}
  
    cout << "YES";

}*/

/*char n;
string m;
//string b ="";
cin >> n >> m;
for(int i =0; i< m.size(); i++){
  if(m[i] != n){
    cout << m[i];
  }
}*/
/*string a;
int  n,m;
int x= 0;
int y = 0;


cin >> a >> n >> m;
char arr[n][m];
for(int i =0; i< n; i++){
  for(int j =0; j <m;j++){
    arr[i][j] = 'X';
  }
}
a[0][0] = '*';
for(int i =0; i< n.length(); i++){

}*/

/*#include <bits/stdc++.h>
using namespace std;
int  main () {
  string n;
  cin >> n;
  char a = n[0];
  string m =n;
 
  reverse(m.begin(), m.end());
  if(n == m){
    cout << "YES";
  }
  else{
    
    
    n.push_back(a);
    string t = n;
    reverse(t.begin(), t.end());
    if(t == n){
      cout << "YES";
    }
    else{
      cout <<"NO";
    }
  }
  
}*/

#include <bits/stdc++.h>
using namespace std;
int main(){
  //string n;
  //getline(cin, n);
 // cout << n << " ";
 string n;
 int a, b,
 cin >> n >> a >> b;
 string m = n.substr(a, b);
 cout << m ;
}






    
  
  



