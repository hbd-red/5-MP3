#include <iostream>
#include <vector>
using namespace std;

int JosephusProblemIterative(int n, int k, vector<int>& arrEliminatedOrder) {
    vector<int> people;
    for (int i = 1; i <= n; ++i) {
        people.push_back(i);
    }

    int index = 0;
    while (people.size() > 1) {
        index = (index + k - 1) % people.size();           // Find next person to eliminate
        arrEliminatedOrder.push_back(people[index]);       // Record elimination
        people.erase(people.begin() + index);              // Remove eliminated person
    }

    return people[0]; // The last person is the survivor
}

int main() {
    int n, k;
    cout << "Enter number of people (n): ";
    cin >> n;
    cout << "Enter number of steps (k): ";
    cin >> k;

    vector<int> arrEliminatedOrder;
    int survivor = JosephusProblemIterative(n, k, arrEliminatedOrder);

    cout << "Elimination order: ";
    for (int person : arrEliminatedOrder) {
        cout << person << "  ";
    }
    cout << endl;

    cout << "Survivor: " << survivor << endl;

    return 0;
}
