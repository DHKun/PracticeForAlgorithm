<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a, b, c, d;
    while (n--)
    {
        cin >> a >> b >> c >> d;
        long long target = (c * b) / d;
        long long maxa;
        if ((c * b) % d == 0)
        {
            maxa = target - 1;
        }
        else
        {
            maxa = target;
        }
        cout << a - maxa << " ";
    }
    cout << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a, b, c, d;
    while (n--)
    {
        cin >> a >> b >> c >> d;
        long long target = (c * b) / d;
        long long maxa;
        if ((c * b) % d == 0)
        {
            maxa = target - 1;
        }
        else
        {
            maxa = target;
        }
        cout << a - maxa << " ";
    }
    cout << endl;
    return 0;
}
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
