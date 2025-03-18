#include <bits/stdc++.h>
using namespace std;

int main() {
    set<double> uniquePowers;  // Using a set to store unique values

    for (int a = 2; a <= 100; a++) {
        for (int b = 2; b <= 100; b++) {
            uniquePowers.insert(pow(a, b));
        }
    }

    cout << uniquePowers.size() << endl;  // Output the number of unique powers
    return 0;
}
