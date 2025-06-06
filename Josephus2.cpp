#include <iostream>
using namespace std;

int Josephus(int n, int k) {
    if (n == 1)
        return 1; // Base case: only one person left (position 1)
    else
        return (Josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int n, k;
    cout << "Enter number of people (n): ";
    cin >> n;
    cout << "Enter number of steps (k): ";
    cin >> k;

    int survivor = Josephus(n, k);
    cout << "Survivor is at position: " << survivor << endl;

    return 0;
}