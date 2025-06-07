#include <iostream>
using namespace std;
void BinarySearch(int intSize, int intArr[], int intSearch);

int main(){
    //initialize array
    int intSize = 10;
    int intArr[intSize] = {3, 12, 34, 52, 59, 67, 84, 92, 99, 124};

    int intSearch;

    cout << "Enter the element to be searched: ";
    cin >> intSearch;

    BinarySearch(intSize, intArr, intSearch);
}

void BinarySearch(int intSize, int intArr[], int intSearch){
    int intStart = 0;
    int intEnd = intSize - 1;
    int i;
    for(i = intSize; i > 0; i = i/2){ //halves i until 0
        cout << "\nEnd: " << intEnd << " Start: " << intStart << endl;
        int intIndex = (intStart + intEnd) / 2; //getting the middle index
        cout << "Index is: " << intIndex << endl;
        if(intSearch > intArr[intIndex]){ //compare if element being searched is greater than the middle index
            intStart = intIndex + 1; //if true, make the search start from index + 1.
        }
        else if(intSearch < intArr[intIndex]){ //compare if element being searched is less than the middle index
            intEnd = intIndex - 1; //if true, make the search end at index - 1
        }
        else{ //if both is false, meaning the element is found at the middle index.
            cout << "Element Found at index " << intIndex << "!";
            break;
        }
    }
    //if i reached 0, the element does not exist in the array.
    if(i == 0){
        cout << "Element not found!";
    }
}
