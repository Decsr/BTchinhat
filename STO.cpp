#include<bits/stdc++.h>
using namespace std;
long long Max=-1e8,n,a[1000001],i;
int main()
{
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        Max=max(Max,a[i]);
    }
    sort(a+1,a+n+1);
    for (i=2;i<=n;i++)
        if (a[i]!=Max)
        {
            printf("%lld",a[i]);
            exit(0);
        }
}
