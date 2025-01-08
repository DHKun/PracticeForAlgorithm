#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string l, u, d;
    for (char c : s)
    {
        if (islower(c))
        {
            l += c;
        }
        else if (isupper(c))
        {
            u += c;
        }
        else if (isdigit(c))
        {
            d += c;
        }
    }
    string result = l + d + u;
    cout << result << endl;
    return 0;
}