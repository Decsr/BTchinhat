#include<bits/stdc++.h>
using namespace std;
long long n,i,f[101],res,a[100001];
int fibo(int k)
{
    if (k<2) return 1;
    return fibo(k-1)+fibo(k-2);
}
int main()
{
    scanf("%lld",&n);
    f[0]=1;
    f[1]=1;
    for (i=2;i<=100;i++)
        f[i]=f[i-1]+f[i-2];
    for (i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        printf("%lld ",f[a[i]]);
    }
    printf("\n");
    for (i=1;i<=n;i++)
        printf("%lld ",fibo(a[i]));
}
