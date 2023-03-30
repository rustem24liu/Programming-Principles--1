#include <bits/stdc++.h>
using namespace std;
    double GetPriceQualityRatio(int price, int quality){
        double pro = (double)quality/price;
        return pro;
    }
    int main(){
        int n;
        cin >> n;
        vector <string> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            cin >> b[i];
            cin >> c[i];
        }
        vector <double> d(n);
        for(int i=0;i<n;i++){
            d[i]=GetPriceQualityRatio(b[i], c[i]);

        }
        double max=d[0];
        int q=0;
        for(int i=0;i<n;i++){
            if(d[i]>max){
                max=d[i];
                q=i;
            }
        }
        cout << a[q];
    }