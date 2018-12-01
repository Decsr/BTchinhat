#include<bits/stdc++.h>
#include<string>
using namespace std;
int n,x;
bool check(char s[])
{
    int h,i;
    int k = x;
    h = k / 2;
    for ( i=1; i<=k; i++ )
        if ( s[i] >= 'A' && s[i] <= 'Z' )
            s[i] = s[i] + ( 'a' - 'A' );
    for ( i=1; i<=h; i++ )
        if ( s[i] != s[k-i+1] )
            return false;
    return true;
}
int main()
{
    cin >> n;
    cin.ignore(99999,'\n');
    for ( int i=1; i<=n; i++ )
    {
        char a[100001],f[100001];
        cin.getline(a, 100001, '\n' );
        int y = strlen(a) - 1;
        x = 0;
        for ( int j=0; j<=y; j++ )
            if ( a[j] != ' ' )
            {
                x++;
                f[x] = a[j];
            }
        if ( check(f) == true )
            cout << "TRUE\n";
        else cout << "FALSE\n";
    }
}

