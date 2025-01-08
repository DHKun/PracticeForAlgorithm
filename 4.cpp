#include <iostream>
#include <algorithm>
using namespace std;

//ÉıĞòÅÅĞò
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int num[30]; 

    cout << "ÇëÊäÈë30¸öÊı×Ö: ";
    for (int i = 0; i < 30; i++) {
        cin >> num[i];
    }

    //ÅÅĞò
    sort(num, num + 30);

    cout << "ÅÅĞòºóµÄÊı×ÖÎª: ";
    for (int i = 0; i < 30; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}

