#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> logins;
    for(int i=0;i<n;i++){
        string mail;
        cin >> mail;
        if(mail.find("gmail.com")!= string::npos){
            logins.push_back(mail);
        }
    }
    for(int i=0;i<logins.size();i++){
        string s = "";
        string d = logins[i];
        for(int j=0;j<logins[i].size();j++){
            s += d[j];
            if(d[j] == '@') break;
        }
        s.pop_back();
        cout << s << endl;
    }
}
