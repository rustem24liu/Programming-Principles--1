/*#include <iostream>
using namespace std;
int example(int a){
    cout << a << endl;
    if(a == 0) return a;

    return example(--a);

}
int main(){
    example(5);
}*/

/*#include <iostream>
using namespace std;
void SearhBinary(int n, int arr[] ,int m ){
    int z = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] == m){
        z++;
        }
    }
    if(z >= 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    SearhBinary(n, arr, m);
    
}*/

// FACTORIAL
/*#include <iostream>
using namespace std;
int FActo(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return FActo(n-1) * n;
}
int main(){
    int n;
    cin >> n;
    cout << FActo(n);
}*/
//FIBONACHI
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}
/*#include <iostream>
using namespace std;
int SuM(int n){
    if(n==0) return 0;
    return SuM(n%10);
    n/=10;

}
int main(){
    int n;
    cin >> n;
    cout < SuM(n);
}*/

/**/

/*#include <iostream>
using namespace std;
int degree(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    if(n!=1){
    return 2*degree(n-1);
    }


}
int main(){
    int n;
    cin >> n;
    cout << degree(n);

}*/
/*#include <iostream>
using namespace std;
int NoBinary(int n){
    if(n != 1 && n != 0){
        
        NoBinary(n/2);
        cout << n%2;

    }
    else{
        cout << n;
    }
}
int main(){
    int n;
    cin >> n;
    NoBinary(n);
}*/


/*#include <iostream>
using namespace std;
int i = 0;
int SumOF(string n, int i){
    if(i==n.size()) return 0;
    return (n[i]-48) + SumOF(n, i+1);

}
int main(){
    string n;
    cin >> n;
    cout << SumOF(n, i);
}*/

/*#include <iostream>
using namespace std;
bool cheek(int n){
    if(n==1) return 1;
    if(n%2 == 0){
        return cheek(n/2);
    }
    if(n%2!=0){
        return 0;
    }
    

}
int main(){
    int n;
    cin >> n;
    if(cheek(n)) cout << "Yes";
    else{
        cout << "No";
    }

}*/
/*  #include <iostream>
using namespace std;
int i = 0;
int Heater(string n, int i){
    if(i == n.size()) return 0;
    return ((n[i]-48)/2 + Heater(n, i+1));

}
int main(){
    string n;
    cin >> n;
    cout << Heater(n, i);

}*/
