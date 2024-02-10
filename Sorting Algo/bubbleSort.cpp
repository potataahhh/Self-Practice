#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                // Swap if the element found is greater than the next element
                
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    bubble_sort(myVector);

    cout << "Sorted array: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}
