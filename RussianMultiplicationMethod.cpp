#include <iostream>
#include <vector>
using namespace std;

int RussianMultiply(int multiplicand, int multiplier) {
    int product = 0;
    vector<int> arrAdded;

    cout << "\nMultiplicand\tMultiplier\n";
    cout << "----------------------------\n";

    while (multiplicand > 0) {
        if (multiplicand % 2 != 0) {
            product += multiplier;
            arrAdded.push_back(multiplier); 
            cout << multiplicand << "\t\t" << multiplier << endl;
        } else {
            cout << multiplicand << "\t\t" << multiplier << "  // skipped\n";
        }

        multiplicand /= 2;
        multiplier *= 2;
    }

    cout << "\nAdded Multipliers:\n";
    for (size_t i = 0; i < arrAdded.size(); ++i) {
        cout << arrAdded[i];
        if (i < arrAdded.size() - 1)
            cout << " + ";
    }
    cout << " = " << product << endl;

    return product;
}

int main() {
    int intInputA, intInputB;
    cout << "\nEnter two integers to multiply:\n";
    cout << "Input A: ";
    cin >> intInputA;

    cout << "Input B: ";
    cin >> intInputB;
    
    RussianMultiply(intInputA, intInputB);
    return 0;
}
