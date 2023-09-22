#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> cardCounts;

    int cards[5];
    for (int i = 0; i < 5; ++i) {
        cin >> cards[i];
        cardCounts[cards[i]]++;
    }

    bool f = false;
    for (const auto& pair : cardCounts) {
        if (pair.second == 3 || pair.second == 2) {
            f = true;
        } else {
            f = false;
            break;
        }
    }

    if (f) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
