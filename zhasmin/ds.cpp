
#include <bits/stdc++.h>
using namespace std;
 

void printPendantVertices(map<char, vector<char> > graph)
{
 
    for (auto x : graph) {
        if (x.second.size() == 1) {
            cout << x.first << " ";
        }
    }
}
int main()
{
 
    map<char, vector<char> > graph;
    graph['A'].push_back('B');
    graph['B'].push_back('A');
    graph['C'].push_back('B');
    graph['B'].push_back('C');
 
    printPendantVertices(graph);
 
    return 0;
}