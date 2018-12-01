#include<bits/stdc++.h>
using namespace std;
long long n,Max=0;
int main()
{
    scanf("%lld",&n);
    while (n!=0)
    {
        Max=max(Max,n%10);
        n/=10;
    }
    printf("%lld",Max);
}
