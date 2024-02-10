#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        // Find the minimum element in the unsorted part of the array

        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element in the unsorted part

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> myVector = {64, 25, 12, 22, 11};

    selection_sort(myVector);

    cout << "Sorted array: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}



