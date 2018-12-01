#include<bits/stdc++.h>
using namespace std;
int i;
string a;
int main()
{
    getline(cin,a);
    int h = a.length() - 1;
    for ( i=0; i<=h; i++ )
        while ( a[i] == ' ' && a[i+1] == ' ' )
            a.erase(i,1);
    if ( a[0] == ' ' )
        a.erase(0,1);
    h = a.length() - 1;
    if ( a[h] == ' ' )
        a.erase(h,1);
    cout << a;
}
