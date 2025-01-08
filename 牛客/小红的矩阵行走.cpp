<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

bool dfs(const vector<vector<int>> &a, int x, int y, int target, vector<vector<bool>> &visited)
{
    int n = a.size();
    int m = a[0].size();
    if (x >= n || y >= m || visited[x][y])
        return false;
    if (a[x][y] != target)
        return false;
    if (x == n - 1 && y == m - 1)
        return true;
    visited[x][y] = true;
    bool right = dfs(a, x, y + 1, target, visited);
    bool down = dfs(a, x + 1, y, target, visited);
    visited[x][y] = false;
    return right || down;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        if (dfs(a, 0, 0, a[0][0], visited))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

bool dfs(const vector<vector<int>> &a, int x, int y, int target, vector<vector<bool>> &visited)
{
    int n = a.size();
    int m = a[0].size();
    if (x >= n || y >= m || visited[x][y])
        return false;
    if (a[x][y] != target)
        return false;
    if (x == n - 1 && y == m - 1)
        return true;
    visited[x][y] = true;
    bool right = dfs(a, x, y + 1, target, visited);
    bool down = dfs(a, x + 1, y, target, visited);
    visited[x][y] = false;
    return right || down;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        if (dfs(a, 0, 0, a[0][0], visited))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
