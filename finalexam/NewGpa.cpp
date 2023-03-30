#include <bits/stdc++.h>
using namespace std;
bool comp(pair<pair<string, string>, double> &a, pair <pair<string , string>, double> &b){
    if(a.second == b.second){
        if(a.first.first == b.first.first){
            return a.first.second < b.first.second;
        }
        return a.first.first < b.first.first;
    }
    return a.second < b.second;
}
double ESEP(string x, int y){
    if(x == "A+") return y * 4.00;
    if(x == "A")  return y * 3.75;
    if(x == "B+") return y * 3.50;
    if(x == "B") return y * 3.00;
    if(x == "C+") return y * 2.50;
    if(x == "C") return y * 2.00;
    if(x == "D+") return y * 1.50;
    if(x == "D") return y * 1.00;
    if(x == "F") return y * 0;
}
int main(){
    vector <pair <pair <string, string>, double>> v;
    int n;
    cin >> n;
    while(n--){
        string firstName;
        string lastName;
        cin >> firstName >> lastName;
        int m;
        cin >> m;
        double allcredit = 0;
        double result;
        double score = 0;
        while(m--){
            string mark;
            int credit;
            cin >> mark >> credit;
            allcredit += credit;
            score += ESEP(mark, credit);
        }
        result = score/allcredit;
        v.push_back({{firstName, lastName}, result});
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i< v.size(); ++i){
        cout << v[i].first.first << " " << v[i].first.second << " " << fixed << setprecision(3) << v[i].second << endl;
    }
}