#include <bits/stdc++.h>
#define ll long long 
#define st string
#define vt vector
using namespace std;

//
//#define <alias> <name_of_strutucture>
//

int main()
{
    ll n; 
    ll x = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        st s;
        cin >> s;
        if(s == "++X" || s == "X++")
        {
            x++;
        }else if(s == "--X" || s == "X--")
        {
            x--;
        }
    }
    cout << x << "\n";

    return 0;
}