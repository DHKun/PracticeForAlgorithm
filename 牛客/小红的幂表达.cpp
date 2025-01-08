#include <bits/stdc++.h>
using namespace std;
void express_as_powers(int x)
{
    cout << x << endl;
    vector<string> powers;
    powers.push_back(to_string(x) + "^1");
    for (int base = 2; base <= static_cast<int>(sqrt(x)); ++base)
    {
        int power = base;
        int exponent = 1;
        while (power < x)
        {
            power *= base;
            exponent++;
        }
        if (power == x)
        {
            powers.push_back(to_string(base) + "^" + to_string(exponent));
        }
    }
    sort(powers.begin(), powers.end(), [](const string &a, const string &b)
         { return stoi(a.substr(a.find('^') + 1)) < stoi(b.substr(b.find('^') + 1)); });

    for (const auto &power : powers)
    {
        cout << "=" << power << endl;
    }
}

int main()
{
    int x;
    cin >> x;
    express_as_powers(x);
    return 0;
}
