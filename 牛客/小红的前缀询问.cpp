<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    unordered_map<int, int> countMap;
    vector<int> result(n, 0);
    int pairCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = a[i];
        if (countMap[num] > 0)
        {
            pairCount += countMap[num];
        }
        countMap[num]++;
        result[i] = pairCount;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    unordered_map<int, int> countMap;
    vector<int> result(n, 0);
    int pairCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = a[i];
        if (countMap[num] > 0)
        {
            pairCount += countMap[num];
        }
        countMap[num]++;
        result[i] = pairCount;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
