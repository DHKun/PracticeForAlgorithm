#include <bits/stdc++.h>
using namespace std;
bool isValidSequence(string sequence)
{
    int counter = 0;
    for (int i = 0; i < sequence.size(); i++)
    {
        if (sequence[i] == 'I')
        {
            counter++;
        }
        else if (sequence[i] == 'O')
        {
            counter--;
        }
        if (counter < 0)
        {
            return false;
        }
    }
    return counter == 0;
}

int main()
{
    string sequence;
    cin >> sequence;
    cout << isValidSequence(sequence) << endl;
    return 0;
}