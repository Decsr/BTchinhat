#include<bits/stdc++.h>
using namespace std;
int n,t,a[100];
bool Free[100];


void chinhhop(int i)
{
    int j;
    if ( i > n )
    {
        for ( j=1; j<=n; j++ )
            printf("%d ",a[j]);
        printf("\n");
        return;
    }
    for ( j=1; j<=n; j++ )
    {
        if ( Free[j] == true )
        {
            a[i] = j;
            Free[j] = false;
            chinhhop(i+1);
            Free[j] = true;
        }
    }
}


int main()
{
    scanf("%d",&n);
    for ( t=1; t<=n; t++ )
        Free[t] = true;
    chinhhop(1);
}
