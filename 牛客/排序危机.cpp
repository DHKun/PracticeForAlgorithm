<<<<<<< HEAD
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
=======
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
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
}