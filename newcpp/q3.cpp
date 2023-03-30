#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for (int j=0;j<m ;j++){
    cin >>b[j];
    }
   for(int j = 0; j< m; j++){
    int cnt = 0;
    for(int i = 0; i< n; i++){
        if(a[i] == b[j]){
            cnt++;
    //        break;
            
        }
    }
    cout << cnt << endl;
   }
}