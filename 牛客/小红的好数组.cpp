<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
bool isHuiwen(const vector<int> &temparr)
{
    int left = 0, right = temparr.size() - 1;
    while (left < right)
    {
        if (temparr[left] != temparr[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool canBeHuiwen(const vector<int> &temparr)
{
    int left = 0, right = temparr.size() - 1;
    int c = 0;
    while (left < right)
    {
        if (temparr[left] != temparr[right])
        {
            c++;
            if (c > 1)
            {
                return false;
            }
        }
        left++;
        right--;
    }
    return c == 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int good = 0;
    for (int i = 0; i <= n - k; ++i)
    {
        vector<int> temparr(arr.begin() + i, arr.begin() + i + k);
        if (!isHuiwen(temparr) && canBeHuiwen(temparr))
        {
            good++;
        }
    }
    cout << good << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
bool isHuiwen(const vector<int> &temparr)
{
    int left = 0, right = temparr.size() - 1;
    while (left < right)
    {
        if (temparr[left] != temparr[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool canBeHuiwen(const vector<int> &temparr)
{
    int left = 0, right = temparr.size() - 1;
    int c = 0;
    while (left < right)
    {
        if (temparr[left] != temparr[right])
        {
            c++;
            if (c > 1)
            {
                return false;
            }
        }
        left++;
        right--;
    }
    return c == 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int good = 0;
    for (int i = 0; i <= n - k; ++i)
    {
        vector<int> temparr(arr.begin() + i, arr.begin() + i + k);
        if (!isHuiwen(temparr) && canBeHuiwen(temparr))
        {
            good++;
        }
    }
    cout << good << endl;
    return 0;
}
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
