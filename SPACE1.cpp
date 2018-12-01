#include<bits/stdc++.h>
using namespace std;
int n,i,j;
string a;
int main()
{
    cin >> n;
    for ( i=0; i<=n; i++ )
    {
        getline(cin,a);
        int h = a.length() - 1;
        int dem = 0;
        for (int j=0; j<=h; j++ )
            if ( a[j] == ' ' ) dem++;
        if ( i != 0 )
            cout << dem << "\n";
    }
}
