#include <bits/stdc++.h>
using namespace std;
bool check(map<int,int>m, int y)
{
    int n=y;
    int sum = 0;
    map<int,int>::iterator itr;
    for(itr = m.begin(); itr!=m.end(); ++itr)
    {
        sum += itr->first*itr->second;
    }
    map<int,int>::reverse_iterator it;
        for(it = m.rbegin(); it!=m.rend(); ++it)
        {
            if(it->first<=y && it->second>=y/it->first)
            {
                m[it->first] = m[it->first] - y/it->first;
                y = y%it->first;
            }
            else if(it->first<=y && it->second<y/it->first)
            {
                y = y - it->first*it->second;
                m[it->first]=0;
            }
        }
    int sum1 = 0;
    map<int,int>::iterator iter;
    for(iter = m.begin(); iter!=m.end(); ++iter)
    {
        sum1 += iter->first*iter->second;
    }
    if(sum==sum1+n) return true;
    else return false;
}
int main(){
    vector<int>v = {1, 2, 5, 10, 20, 50, 100};
    map<int,int>m;
    for(int i = 0; i < 7; i++)
    {
        int x;
        cin >>x;
        m[v[i]]=x; 
    }
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int y; cin>>y;
        if(check(m, y)) 
        {
            map<int,int>::reverse_iterator it;
        for(it = m.rbegin(); it!=m.rend(); ++it)
        {
            if(it->first<=y && it->second>=y/it->first)
            {
                m[it->first] = m[it->first] - y/it->first;
                y = y%it->first;
            }
            else if(it->first<=y && it->second<y/it->first)
            {
                y = y - it->first*it->second;
                m[it->first]=0;
            }
        }
        cout <<"Transaction accepted!" << endl;
        }
        else cout <<"Transaction stopped!"<<endl;
    }
    // cout << endl;
    map<int,int>::iterator it;
    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << it->first << " " << it->second<<endl;
    }
}