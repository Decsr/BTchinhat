#include<bits/stdc++.h>
using namespace std;
long long n;


int fibo(int k)
{
    if (k<=2) return 1;
    return fibo(k-1)+fibo(k-2);
}


int main()
{
    scanf("%lld",&n);
    if ( n == 0 )
    {
        printf("0");
        exit(0);
    }
    printf("%d",fibo(n));
}
