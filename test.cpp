#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> scores(n);

    for (int i = 0; i < n;++i){
        cin >> scores[i];
    }

    for (int i = 2; i < n;++i){
        vector<int> temp(scores.begin(), scores.begin() + i + 1);
        sort(temp.begin(), temp.end());
        temp.erase(temp.begin());
        temp.pop_back();
        double sum = 0;
        for(int score : temp){
            sum += score;
        }
        double avg = sum / temp.size();
        cout << fixed << setprecision(2) << avg << endl;
    }
        return 0;
}