/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cin >> n;
    for (int i = 0; i< n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int c, m;
    cin >> c >> m;

    reverse(v.begin() + c , v.begin() + m+1);
    for(int i = 0; i< n; i++){
        cout << v[i] << " ";
    }
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m;
    cin >> m;
    v.erase(v.begin() + m);
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <vector <int>> v;

    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        vector <int> temp;
        for(int j = 0; j<n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout << endl;
    for(int i=  0; i<n; i++){
        for(int j = 0; j< n;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <vector<int>> v;
    for(int i = 0; i< n; i++){
        vector <int> temp;
        int m;
        cin >> m;

        for(int j = 0; j< m; j++ ){
        int x;
        cin >> x;
        temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout << endl;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i< n; i++){
        int  x;
        cin >> x;
        v.push_back(x);   
    }
    int l, r;
    cin >> l >> r;

    v.erase(v.begin()+l, v.begin()+r+1);
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }
}*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i< n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int c, m;
    cin >> c >> m;

    for(int i = 0; i< v.size() +1; i++){
        if(c == i) v[i] += m;
    }
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }
}