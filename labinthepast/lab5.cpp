/*#include <bits/stdc++.h>
using namespace std;
int main (){
    long long int upp = 0, low = 0;
    char q[100];
    cin >> q;
    for (int i = 0; q[i] !=0;i++){
        if(q[i] >= 'A' && q[i] <= 'Z'){
            upp++;
        }
        else if (q[i] >= 'a' && q[i] <= 'z'){
            low++;
        }
    }
    cout << low << " " << upp ;
}*/


/*#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main (){
    char q[1000];
    cin >> q;
    for (int i = 0; q[i] != 0; i++){
        if(q[i]>='a' && q[i]<='z'){
            q[i] = toupper('a') <= toupper('z');
        }
         cout << q[i];
    }
   
}*/


/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i < j && i + j == n -1){
                cout << arr[i][j] <<" " << endl;
            }
           
            }

        }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            if(i < j && i+j != n -1){
                cout << arr[i][j] << " " ;
        }
    }
    }
    cout << endl;

   for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            if(i == j){
                cout << arr[i][j] << " ";
            }
        }
}
    cout << endl;

   for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            if(j < i && i+j != n -1){
                cout << arr[i][j] << " ";
            }
        }
}
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            if(j < i && i+j == n -1){
                cout << arr[i][j] << " " << endl;
            }
        }
}


}
*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
   string n;
   cin >> n;
   for (int i  = 0; i < n.size(); i++){
   	if(n[i] >= 'a' && n[i] <= 'z'){
   		n[i] = n[i] - 32;
	   }
	   cout << n[i];
   	
   }
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    string n;
    string m;
    cin >> n >> m;
    for (int i = 0; i < n.size(); i++){
        if (n.find(m) != -1){
            cout << "YES";
            break;
        }
        else {
            cout << "NO";
            break;
        }
    }
}*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size() / 2; i++){
        if(!(s[i] == s[s.size() - i - 1])){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int odd = 0, even = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0) even += s[i] - 48;
        else odd += s[i] - 48;
    }
    if(even == odd) cout << "YES";
    else cout << "NO";
}
*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
        cout << s[i];
    } 
}*/
/*#include <iostream>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    if(s.find(sub) != -1) cout << "YES";
    else cout << "NO";
}*/
 /*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        arr[s[i] - 48] += 1;
    }
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(arr[i] != 0 and arr[j] != 0 and arr[i] != arr[j]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    sort(s.begin(), s.end());
    sort(sub.begin(), sub.end());
    if(s == sub) cout << "YES";
    else cout << "NO";
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;
    string sub = s;

    reverse(s.begin(),s.end());
    if(s == sub or sub.substr(1) == s.substr(0, s.size() - 1)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}*/

/*#include <iostream>
using namespace std;

int main(){
    string s, sub = "aeiou"; cin >> s;
    int cnt = 0;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < sub.size(); j++){
            if(s[i] == sub[j]) cnt++;
        }
    }
    cout << cnt;
}*/

/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] > s[i + 1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}*/
/*#include <iostream>
using namespace std;

int main(){
    string s, x; cin >> s >> x;
    int n; cin >> n;

    for(int i = 0; i < s.size(); i++){
        if(x[0] == s[i]) n--;
    }
    cout <<(n ? "NO" : "YES");
}
*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    cout << "Welcome " + s;
}*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    char max = s[0];

    for(int i = 0; i < s.size(); i++){
        if(s[i] > max) max = s[i];
    }
    cout << char(max);
}*/
/*#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 122) s[i] -= 25;
        else s[i] += 1;
        cout << s[i];
    }
}*/

/*#include <iostream>
using namespace std;

int main(){
    string s, sub, ans; cin >> s >> sub;
    for(int i = 0; i < sub.size() / s.size(); i++){
        ans += s;
    }
    cout << (ans == sub ? "YES" : "NO");
}*/