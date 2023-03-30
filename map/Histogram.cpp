#include<stdio.h>
#include<string.h>
#include<iostream>
#include<queue>
using namespace std;
#define inf 1<<29
long long a[100005],r[100005],l[100005];
int main()
{
    int n;
    while(~scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        l[0]=0;
        r[n-1]=n-1;
        for(int i=1;i<n;i++)
        {
            int j=i;
            while(j>0 && a[i]<=a[j-1]) j=l[j-1];
            l[i]=j;
        }
        for(int i=n-2;i>=0;i--)
        {
            int j=i;
            while(j<n-1 && a[i]<=a[j+1]) j=r[j+1];
            r[i]=j;
        }
        long long maxx=0;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,(r[i]-l[i]+1)*a[i]);
        }
        printf("%lld\n",maxx);
    }
    return 0;
}