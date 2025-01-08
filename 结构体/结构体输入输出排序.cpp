#include <iostream>
using namespace std;

struct student
{
    int no;
    char na[100];
    int score;
    int sex;
};

// ????????§³????
void paixu(student stu[], int n)
{
    student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (stu[j].score < stu[j + 1].score)
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
}

int main()
{
    student stu[size];
    for (int i = 0; i < 3; i++)
    {
        cout << "num:" << endl;
        cin >> stu[i].no;
        cout << "name:" << endl;
        cin >> stu[i].na;
        cout << "score:" << endl;
        cin >> stu[i].score;
        cout << "sex:" << endl;
        cin >> stu[i].sex;
    }
    MAX(stu, size);
    for (int j = 0; j < size; j++)
    {
        cout << "num: " << stu[j].no << " name: " << stu[j].na << " score: " << stu[j].score << " sex: " << stu[j].sex << endl;
    }
    return 0;
}
