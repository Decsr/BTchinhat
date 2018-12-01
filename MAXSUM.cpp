#include<bits/stdc++.h>
using namespace std;
long long i,j,n,s,a[1000001],Max=-1e8,x,res;
int main()
{
    scanf("%lld %lld",&n,&s);
    for (i=1;i<=n;i++) scanf("%lld",&a[i]);
    if (s>n) {printf("-1");exit(0);}
    for (i=1;i<=n-s+1;i++)
    {
        res=0;
        for (j=i;j<i+s;j++)
            res+=a[j];
        if (Max<res)
        {
            Max=res;
            x=i;
        }
    }
    printf("%lld %lld",Max,x);
}
