#include<bits/stdc++.h>
#include<string>
using std::string;
using namespace std;
char st[200],a[200];
int i,j,res=0;
void check(int i)
{
    for (int t=res; t<=strlen(st)-1; t++ )
    {
        a[i]=st[t];
        if ( i < strlen(st) )
        {
            for ( j=1; j<=i; j++ )
                printf("%c",a[j]);
            printf("\n");
            res=t+1;
            check(i+1);
        }
        if ( i == strlen(st) )
        {
            for ( j=1; j<=i; j++ )
                printf("%c",a[j]);
            printf("\n");
        }
    }
}
int main()
{
    scanf("%s",st);
    sort(st,st+strlen(st));
    check(1);
}

